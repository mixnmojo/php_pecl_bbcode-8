--TEST--
BBCODE Limit Args
--FILE--
<?php
if (!extension_loaded('bbcode')){
	die ('skip bbcode not loadable');
}

$text = <<< MSG
[i]foo[/i]
[i]bar[/i]
[i]Foo - Bar[/i]
MSG;

$BBCode = array(
	'i' => array('type'=> BBCODE_TYPE_NOARG, 'max'=>2, 'open_tag'=>'<i>', 'close_tag'=>'</i>'),
);

echo bbcode_parse(bbcode_create($BBCode), $text);
?>
--EXPECT--
<i>foo</i>
<i>bar</i>
[i]Foo - Bar[/i]

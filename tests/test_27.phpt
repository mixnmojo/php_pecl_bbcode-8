--TEST--
BBCODE Invalid quote segfaults
--FILE--
<?php
if (!extension_loaded('bbcode')){
	die ('skip bbcode not loadable');
}

$text = <<< MSG
[quote=a]foo[/quote]
[quote="b]bar[/quote]
MSG;

$BBCode = array(
	'quote' => array('type'=> BBCODE_TYPE_OPTARG),
);

echo bbcode_parse(bbcode_create($BBCode), $text);
?>
--EXPECT--
foo
[quote="b]bar[/quote]

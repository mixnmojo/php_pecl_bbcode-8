/*
  +----------------------------------------------------------------------+
  | PHP Version 5                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2008 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Xavier De Cock <void@php.net>                                |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_BBCODE_H
#define PHP_BBCODE_H

#define PHP_BBCODE_VERSION "2.0.1"
#define PHP_BBCODE_EXTNAME "bbcode"
#define PHP_BBCODE_RES_NAME "BBCode resource"

#define BBCODE_SET_FLAGS_SET	0
#define BBCODE_SET_FLAGS_ADD	1
#define BBCODE_SET_FLAGS_REMOVE 2

extern zend_module_entry bbcode_module_entry;
#define phpext_bbcode_ptr &bbcode_module_entry

ZEND_BEGIN_ARG_INFO_EX(arginfo_bbcode_create, 0, 0, 0)
    ZEND_ARG_INFO(0, initial_tags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bbcode_add_element, 0, 0, 3)
    ZEND_ARG_INFO(0, bbcode_container)
    ZEND_ARG_INFO(0, tag_name)
    ZEND_ARG_INFO(0, tag_definition)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bbcode_destroy, 0, 0, 1)
    ZEND_ARG_INFO(0, bbcode_container)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bbcode_parse, 0, 0, 2)
    ZEND_ARG_INFO(0, bbcode_container)
    ZEND_ARG_INFO(0, to_parse)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bbcode_add_smiley, 0, 0, 3)
    ZEND_ARG_INFO(0, bbcode_container)
    ZEND_ARG_INFO(0, find)
    ZEND_ARG_INFO(0, replace)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bbcode_set_flags, 0, 0, 3)
    ZEND_ARG_INFO(0, bbcode_container)
    ZEND_ARG_INFO(0, flag)
    ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bbcode_set_arg_parser, 0, 0, 2)
    ZEND_ARG_INFO(0, bbcode_container)
    ZEND_ARG_INFO(0, bbcode_child)
ZEND_END_ARG_INFO()
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */

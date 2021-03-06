#==- tests/jsontests/test_basic_data_types.py ----------------------------==#
#
# This file is part of the Lity project distributed under GPL-3.0.
# See LICENSE for details.
#
#==-----------------------------------------------------------------------==#

import json
from . import JSONTestCase


class BasicDataTypesTestCase(JSONTestCase):
    def test_string(self):
        s = '"Hello, World"'
        self.assertReturns(
            ['parseString', s, 0, len(s)],
            [json.loads(s)]
        )

    def test_string_with_offset(self):
        s = '"Hello, World"'
        ngarbage = 14
        self.assertReturns(
            ['parseString', '?' * ngarbage + s, ngarbage, len(s) + ngarbage],
            [json.loads(s)]
        )

    def test_string_with_rem(self):
        s = '"Hello, World"'
        ngarbage = 14
        self.assertReturns(
            ['parseString', s + '?' * ngarbage, 0, len(s)],
            [json.loads(s)]
        )

#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""Tests for `hydro_model_generator_wflow` package."""

# import pytest


# from hydro_model_generator_wflow import hydro_model_generator_wflow
# HOST='http://hydro-model-generator-wflow.appspot.com'
import webtest

import main


def test_get():
    app = webtest.TestApp(main.app)

    response = app.get('/')

    assert response.status_int == 200
    assert response.body == 'Hello, World!'
#
# @pytest.fixture
# def response():
#     """Sample pytest fixture.
#
#     See more at: http://doc.pytest.org/en/latest/fixture.html
#     """
#     # import requests
#     # return requests.get('https://github.com/audreyr/cookiecutter-pypackage')
#     pass
#
#
# def test_content(response):
#     """Sample pytest test function with the pytest fixture as an argument."""
#     # from bs4 import BeautifulSoup
#     # assert 'GitHub' in BeautifulSoup(response.content).title.string
#     pass

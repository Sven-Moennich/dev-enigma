/*
 *                              Copyright (C) 2016 by Rafael Santiago
 *
 * This is free software. You can redistribute it and/or modify under
 * the terms of the GNU General Public License version 2.
 *
 */
#ifndef DEV_ENIGMA_FOPS_IMPL_FREEBSD_DEV_CLOSE_H
#define DEV_ENIGMA_FOPS_IMPL_FREEBSD_DEV_CLOSE_H 1

#include <sys/param.h>
#include <sys/module.h>
#include <sys/kernel.h>
#include <sys/systm.h>

int dev_close(struct cdev *dev, int flags, int devtype, struct thread *td);

void dev_close_dtor(void *data);

#endif

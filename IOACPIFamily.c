//
//  IOACPIFamily.c
//  IOACPIFamily
//
//  Created by William Kent on 11/24/19.
//  Copyright © 2019 PureDarwin Project. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t IOACPIPlatform_start(kmod_info_t * ki, void *d);
kern_return_t IOACPIPlatform_stop(kmod_info_t *ki, void *d);

kern_return_t IOACPIPlatform_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t IOACPIPlatform_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}

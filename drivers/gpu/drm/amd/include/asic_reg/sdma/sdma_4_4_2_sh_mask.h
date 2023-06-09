/*
 * Copyright 2021 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */
#ifndef _sdma_4_4_2_SH_MASK_HEADER
#define _sdma_4_4_2_SH_MASK_HEADER


// addressBlock: aid_sdma_insts_sdma0_sdmadec
//SDMA_UCODE_ADDR
#define SDMA_UCODE_ADDR__VALUE__SHIFT                                                                         0x0
#define SDMA_UCODE_ADDR__VALUE_MASK                                                                           0x00003FFFL
//SDMA_UCODE_DATA
#define SDMA_UCODE_DATA__VALUE__SHIFT                                                                         0x0
#define SDMA_UCODE_DATA__VALUE_MASK                                                                           0xFFFFFFFFL
//SDMA_F32_CNTL
#define SDMA_F32_CNTL__HALT__SHIFT                                                                            0x0
#define SDMA_F32_CNTL__STEP__SHIFT                                                                            0x1
#define SDMA_F32_CNTL__DBG_SELECT_BITS__SHIFT                                                                 0x2
#define SDMA_F32_CNTL__RESET__SHIFT                                                                           0x8
#define SDMA_F32_CNTL__CHECKSUM_CLR__SHIFT                                                                    0x9
#define SDMA_F32_CNTL__HALT_MASK                                                                              0x00000001L
#define SDMA_F32_CNTL__STEP_MASK                                                                              0x00000002L
#define SDMA_F32_CNTL__DBG_SELECT_BITS_MASK                                                                   0x000000FCL
#define SDMA_F32_CNTL__RESET_MASK                                                                             0x00000100L
#define SDMA_F32_CNTL__CHECKSUM_CLR_MASK                                                                      0x00000200L
//SDMA_MMHUB_CNTL
#define SDMA_MMHUB_CNTL__UNIT_ID__SHIFT                                                                       0x0
#define SDMA_MMHUB_CNTL__UNIT_ID_MASK                                                                         0x0000003FL
//SDMA_MMHUB_TRUSTLVL
#define SDMA_MMHUB_TRUSTLVL__SECFLAG0__SHIFT                                                                  0x0
#define SDMA_MMHUB_TRUSTLVL__SECFLAG1__SHIFT                                                                  0x4
#define SDMA_MMHUB_TRUSTLVL__SECFLAG2__SHIFT                                                                  0x8
#define SDMA_MMHUB_TRUSTLVL__SECFLAG3__SHIFT                                                                  0xc
#define SDMA_MMHUB_TRUSTLVL__SECFLAG4__SHIFT                                                                  0x10
#define SDMA_MMHUB_TRUSTLVL__SECFLAG5__SHIFT                                                                  0x14
#define SDMA_MMHUB_TRUSTLVL__SECFLAG6__SHIFT                                                                  0x18
#define SDMA_MMHUB_TRUSTLVL__SECFLAG7__SHIFT                                                                  0x1c
#define SDMA_MMHUB_TRUSTLVL__SECFLAG0_MASK                                                                    0x0000000FL
#define SDMA_MMHUB_TRUSTLVL__SECFLAG1_MASK                                                                    0x000000F0L
#define SDMA_MMHUB_TRUSTLVL__SECFLAG2_MASK                                                                    0x00000F00L
#define SDMA_MMHUB_TRUSTLVL__SECFLAG3_MASK                                                                    0x0000F000L
#define SDMA_MMHUB_TRUSTLVL__SECFLAG4_MASK                                                                    0x000F0000L
#define SDMA_MMHUB_TRUSTLVL__SECFLAG5_MASK                                                                    0x00F00000L
#define SDMA_MMHUB_TRUSTLVL__SECFLAG6_MASK                                                                    0x0F000000L
#define SDMA_MMHUB_TRUSTLVL__SECFLAG7_MASK                                                                    0xF0000000L
//SDMA_VM_CNTL
#define SDMA_VM_CNTL__CMD__SHIFT                                                                              0x0
#define SDMA_VM_CNTL__CMD_MASK                                                                                0x0000000FL
//SDMA_VM_CTX_LO
#define SDMA_VM_CTX_LO__ADDR__SHIFT                                                                           0x2
#define SDMA_VM_CTX_LO__ADDR_MASK                                                                             0xFFFFFFFCL
//SDMA_VM_CTX_HI
#define SDMA_VM_CTX_HI__ADDR__SHIFT                                                                           0x0
#define SDMA_VM_CTX_HI__ADDR_MASK                                                                             0xFFFFFFFFL
//SDMA_ACTIVE_FCN_ID
#define SDMA_ACTIVE_FCN_ID__VFID__SHIFT                                                                       0x0
#define SDMA_ACTIVE_FCN_ID__RESERVED__SHIFT                                                                   0x4
#define SDMA_ACTIVE_FCN_ID__VF__SHIFT                                                                         0x1f
#define SDMA_ACTIVE_FCN_ID__VFID_MASK                                                                         0x0000000FL
#define SDMA_ACTIVE_FCN_ID__RESERVED_MASK                                                                     0x7FFFFFF0L
#define SDMA_ACTIVE_FCN_ID__VF_MASK                                                                           0x80000000L
//SDMA_VM_CTX_CNTL
#define SDMA_VM_CTX_CNTL__PRIV__SHIFT                                                                         0x0
#define SDMA_VM_CTX_CNTL__VMID__SHIFT                                                                         0x4
#define SDMA_VM_CTX_CNTL__PRIV_MASK                                                                           0x00000001L
#define SDMA_VM_CTX_CNTL__VMID_MASK                                                                           0x000000F0L
//SDMA_VIRT_RESET_REQ
#define SDMA_VIRT_RESET_REQ__VF__SHIFT                                                                        0x0
#define SDMA_VIRT_RESET_REQ__PF__SHIFT                                                                        0x1f
#define SDMA_VIRT_RESET_REQ__VF_MASK                                                                          0x0000FFFFL
#define SDMA_VIRT_RESET_REQ__PF_MASK                                                                          0x80000000L
//SDMA_VF_ENABLE
#define SDMA_VF_ENABLE__VF_ENABLE__SHIFT                                                                      0x0
#define SDMA_VF_ENABLE__VF_ENABLE_MASK                                                                        0x00000001L
//SDMA_CONTEXT_REG_TYPE0
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_CNTL__SHIFT                                                       0x0
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_BASE__SHIFT                                                       0x1
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_BASE_HI__SHIFT                                                    0x2
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_RPTR__SHIFT                                                       0x3
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_RPTR_HI__SHIFT                                                    0x4
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_WPTR__SHIFT                                                       0x5
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_WPTR_HI__SHIFT                                                    0x6
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_WPTR_POLL_CNTL__SHIFT                                             0x7
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_RPTR_ADDR_HI__SHIFT                                               0x8
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_RPTR_ADDR_LO__SHIFT                                               0x9
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_CNTL__SHIFT                                                       0xa
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_RPTR__SHIFT                                                       0xb
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_OFFSET__SHIFT                                                     0xc
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_BASE_LO__SHIFT                                                    0xd
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_BASE_HI__SHIFT                                                    0xe
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_SIZE__SHIFT                                                       0xf
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_SKIP_CNTL__SHIFT                                                     0x10
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_CONTEXT_STATUS__SHIFT                                                0x11
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_DOORBELL__SHIFT                                                      0x12
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_CONTEXT_CNTL__SHIFT                                                  0x13
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_CNTL_MASK                                                         0x00000001L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_BASE_MASK                                                         0x00000002L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_BASE_HI_MASK                                                      0x00000004L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_RPTR_MASK                                                         0x00000008L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_RPTR_HI_MASK                                                      0x00000010L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_WPTR_MASK                                                         0x00000020L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_WPTR_HI_MASK                                                      0x00000040L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_WPTR_POLL_CNTL_MASK                                               0x00000080L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_RPTR_ADDR_HI_MASK                                                 0x00000100L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_RB_RPTR_ADDR_LO_MASK                                                 0x00000200L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_CNTL_MASK                                                         0x00000400L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_RPTR_MASK                                                         0x00000800L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_OFFSET_MASK                                                       0x00001000L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_BASE_LO_MASK                                                      0x00002000L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_BASE_HI_MASK                                                      0x00004000L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_IB_SIZE_MASK                                                         0x00008000L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_SKIP_CNTL_MASK                                                       0x00010000L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_CONTEXT_STATUS_MASK                                                  0x00020000L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_DOORBELL_MASK                                                        0x00040000L
#define SDMA_CONTEXT_REG_TYPE0__SDMA_GFX_CONTEXT_CNTL_MASK                                                    0x00080000L
//SDMA_CONTEXT_REG_TYPE1
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_STATUS__SHIFT                                                        0x8
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_DOORBELL_LOG__SHIFT                                                  0x9
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_WATERMARK__SHIFT                                                     0xa
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_DOORBELL_OFFSET__SHIFT                                               0xb
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_CSA_ADDR_LO__SHIFT                                                   0xc
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_CSA_ADDR_HI__SHIFT                                                   0xd
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_IB_SUB_REMAIN__SHIFT                                                 0xf
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_PREEMPT__SHIFT                                                       0x10
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_DUMMY_REG__SHIFT                                                     0x11
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_RB_WPTR_POLL_ADDR_HI__SHIFT                                          0x12
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_RB_WPTR_POLL_ADDR_LO__SHIFT                                          0x13
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_RB_AQL_CNTL__SHIFT                                                   0x14
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_MINOR_PTR_UPDATE__SHIFT                                              0x15
#define SDMA_CONTEXT_REG_TYPE1__RESERVED__SHIFT                                                               0x16
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_STATUS_MASK                                                          0x00000100L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_DOORBELL_LOG_MASK                                                    0x00000200L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_WATERMARK_MASK                                                       0x00000400L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_DOORBELL_OFFSET_MASK                                                 0x00000800L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_CSA_ADDR_LO_MASK                                                     0x00001000L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_CSA_ADDR_HI_MASK                                                     0x00002000L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_IB_SUB_REMAIN_MASK                                                   0x00008000L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_PREEMPT_MASK                                                         0x00010000L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_DUMMY_REG_MASK                                                       0x00020000L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_RB_WPTR_POLL_ADDR_HI_MASK                                            0x00040000L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_RB_WPTR_POLL_ADDR_LO_MASK                                            0x00080000L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_RB_AQL_CNTL_MASK                                                     0x00100000L
#define SDMA_CONTEXT_REG_TYPE1__SDMA_GFX_MINOR_PTR_UPDATE_MASK                                                0x00200000L
#define SDMA_CONTEXT_REG_TYPE1__RESERVED_MASK                                                                 0xFFC00000L
//SDMA_CONTEXT_REG_TYPE2
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA0__SHIFT                                                  0x0
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA1__SHIFT                                                  0x1
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA2__SHIFT                                                  0x2
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA3__SHIFT                                                  0x3
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA4__SHIFT                                                  0x4
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA5__SHIFT                                                  0x5
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA6__SHIFT                                                  0x6
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA7__SHIFT                                                  0x7
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA8__SHIFT                                                  0x8
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA9__SHIFT                                                  0x9
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA10__SHIFT                                                 0xa
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_CNTL__SHIFT                                                   0xb
#define SDMA_CONTEXT_REG_TYPE2__RESERVED__SHIFT                                                               0xe
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA0_MASK                                                    0x00000001L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA1_MASK                                                    0x00000002L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA2_MASK                                                    0x00000004L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA3_MASK                                                    0x00000008L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA4_MASK                                                    0x00000010L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA5_MASK                                                    0x00000020L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA6_MASK                                                    0x00000040L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA7_MASK                                                    0x00000080L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA8_MASK                                                    0x00000100L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA9_MASK                                                    0x00000200L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_DATA10_MASK                                                   0x00000400L
#define SDMA_CONTEXT_REG_TYPE2__SDMA_GFX_MIDCMD_CNTL_MASK                                                     0x00000800L
#define SDMA_CONTEXT_REG_TYPE2__RESERVED_MASK                                                                 0xFFFFC000L
//SDMA_CONTEXT_REG_TYPE3
#define SDMA_CONTEXT_REG_TYPE3__RESERVED__SHIFT                                                               0x0
#define SDMA_CONTEXT_REG_TYPE3__RESERVED_MASK                                                                 0xFFFFFFFFL
//SDMA_PUB_REG_TYPE0
#define SDMA_PUB_REG_TYPE0__SDMA_UCODE_ADDR__SHIFT                                                            0x0
#define SDMA_PUB_REG_TYPE0__SDMA_UCODE_DATA__SHIFT                                                            0x1
#define SDMA_PUB_REG_TYPE0__SDMA_F32_CNTL__SHIFT                                                              0x2
#define SDMA_PUB_REG_TYPE0__SDMA_MMHUB_CNTL__SHIFT                                                            0x5
#define SDMA_PUB_REG_TYPE0__SDMA_MMHUB_TRUSTLVL__SHIFT                                                        0x6
#define SDMA_PUB_REG_TYPE0__RESERVED_14_10__SHIFT                                                             0xa
#define SDMA_PUB_REG_TYPE0__SDMA_VM_CNTL__SHIFT                                                               0x10
#define SDMA_PUB_REG_TYPE0__SDMA_VM_CTX_LO__SHIFT                                                             0x11
#define SDMA_PUB_REG_TYPE0__SDMA_VM_CTX_HI__SHIFT                                                             0x12
#define SDMA_PUB_REG_TYPE0__SDMA_ACTIVE_FCN_ID__SHIFT                                                         0x13
#define SDMA_PUB_REG_TYPE0__SDMA_VM_CTX_CNTL__SHIFT                                                           0x14
#define SDMA_PUB_REG_TYPE0__SDMA_VIRT_RESET_REQ__SHIFT                                                        0x15
#define SDMA_PUB_REG_TYPE0__SDMA_VF_ENABLE__SHIFT                                                             0x16
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_REG_TYPE0__SHIFT                                                     0x17
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_REG_TYPE1__SHIFT                                                     0x18
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_REG_TYPE2__SHIFT                                                     0x19
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_REG_TYPE3__SHIFT                                                     0x1a
#define SDMA_PUB_REG_TYPE0__SDMA_PUB_REG_TYPE0__SHIFT                                                         0x1b
#define SDMA_PUB_REG_TYPE0__SDMA_PUB_REG_TYPE1__SHIFT                                                         0x1c
#define SDMA_PUB_REG_TYPE0__SDMA_PUB_REG_TYPE2__SHIFT                                                         0x1d
#define SDMA_PUB_REG_TYPE0__SDMA_PUB_REG_TYPE3__SHIFT                                                         0x1e
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_GROUP_BOUNDARY__SHIFT                                                0x1f
#define SDMA_PUB_REG_TYPE0__SDMA_UCODE_ADDR_MASK                                                              0x00000001L
#define SDMA_PUB_REG_TYPE0__SDMA_UCODE_DATA_MASK                                                              0x00000002L
#define SDMA_PUB_REG_TYPE0__SDMA_F32_CNTL_MASK                                                                0x00000004L
#define SDMA_PUB_REG_TYPE0__SDMA_MMHUB_CNTL_MASK                                                              0x00000020L
#define SDMA_PUB_REG_TYPE0__SDMA_MMHUB_TRUSTLVL_MASK                                                          0x00000040L
#define SDMA_PUB_REG_TYPE0__RESERVED_14_10_MASK                                                               0x00007C00L
#define SDMA_PUB_REG_TYPE0__SDMA_VM_CNTL_MASK                                                                 0x00010000L
#define SDMA_PUB_REG_TYPE0__SDMA_VM_CTX_LO_MASK                                                               0x00020000L
#define SDMA_PUB_REG_TYPE0__SDMA_VM_CTX_HI_MASK                                                               0x00040000L
#define SDMA_PUB_REG_TYPE0__SDMA_ACTIVE_FCN_ID_MASK                                                           0x00080000L
#define SDMA_PUB_REG_TYPE0__SDMA_VM_CTX_CNTL_MASK                                                             0x00100000L
#define SDMA_PUB_REG_TYPE0__SDMA_VIRT_RESET_REQ_MASK                                                          0x00200000L
#define SDMA_PUB_REG_TYPE0__SDMA_VF_ENABLE_MASK                                                               0x00400000L
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_REG_TYPE0_MASK                                                       0x00800000L
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_REG_TYPE1_MASK                                                       0x01000000L
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_REG_TYPE2_MASK                                                       0x02000000L
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_REG_TYPE3_MASK                                                       0x04000000L
#define SDMA_PUB_REG_TYPE0__SDMA_PUB_REG_TYPE0_MASK                                                           0x08000000L
#define SDMA_PUB_REG_TYPE0__SDMA_PUB_REG_TYPE1_MASK                                                           0x10000000L
#define SDMA_PUB_REG_TYPE0__SDMA_PUB_REG_TYPE2_MASK                                                           0x20000000L
#define SDMA_PUB_REG_TYPE0__SDMA_PUB_REG_TYPE3_MASK                                                           0x40000000L
#define SDMA_PUB_REG_TYPE0__SDMA_CONTEXT_GROUP_BOUNDARY_MASK                                                  0x80000000L
//SDMA_PUB_REG_TYPE1
#define SDMA_PUB_REG_TYPE1__SDMA_RB_RPTR_FETCH_HI__SHIFT                                                      0x0
#define SDMA_PUB_REG_TYPE1__SDMA_SEM_WAIT_FAIL_TIMER_CNTL__SHIFT                                              0x1
#define SDMA_PUB_REG_TYPE1__SDMA_RB_RPTR_FETCH__SHIFT                                                         0x2
#define SDMA_PUB_REG_TYPE1__SDMA_IB_OFFSET_FETCH__SHIFT                                                       0x3
#define SDMA_PUB_REG_TYPE1__SDMA_PROGRAM__SHIFT                                                               0x4
#define SDMA_PUB_REG_TYPE1__SDMA_STATUS_REG__SHIFT                                                            0x5
#define SDMA_PUB_REG_TYPE1__SDMA_STATUS1_REG__SHIFT                                                           0x6
#define SDMA_PUB_REG_TYPE1__SDMA_RD_BURST_CNTL__SHIFT                                                         0x7
#define SDMA_PUB_REG_TYPE1__SDMA_HBM_PAGE_CONFIG__SHIFT                                                       0x8
#define SDMA_PUB_REG_TYPE1__SDMA_UCODE_CHECKSUM__SHIFT                                                        0x9
#define SDMA_PUB_REG_TYPE1__RESERVED_10_10__SHIFT                                                             0xa
#define SDMA_PUB_REG_TYPE1__SDMA_FREEZE__SHIFT                                                                0xb
#define SDMA_PUB_REG_TYPE1__SDMA_PHASE0_QUANTUM__SHIFT                                                        0xc
#define SDMA_PUB_REG_TYPE1__SDMA_PHASE1_QUANTUM__SHIFT                                                        0xd
#define SDMA_PUB_REG_TYPE1__SDMA_POWER_GATING__SHIFT                                                          0xe
#define SDMA_PUB_REG_TYPE1__SDMA_PGFSM_CONFIG__SHIFT                                                          0xf
#define SDMA_PUB_REG_TYPE1__SDMA_PGFSM_WRITE__SHIFT                                                           0x10
#define SDMA_PUB_REG_TYPE1__SDMA_PGFSM_READ__SHIFT                                                            0x11
#define SDMA_PUB_REG_TYPE1__CC_SDMA_EDC_CONFIG__SHIFT                                                         0x12
#define SDMA_PUB_REG_TYPE1__SDMA_BA_THRESHOLD__SHIFT                                                          0x13
#define SDMA_PUB_REG_TYPE1__SDMA_ID__SHIFT                                                                    0x14
#define SDMA_PUB_REG_TYPE1__SDMA_VERSION__SHIFT                                                               0x15
#define SDMA_PUB_REG_TYPE1__SDMA_EDC_COUNTER__SHIFT                                                           0x16
#define SDMA_PUB_REG_TYPE1__SDMA_EDC_COUNTER2__SHIFT                                                          0x17
#define SDMA_PUB_REG_TYPE1__SDMA_STATUS2_REG__SHIFT                                                           0x18
#define SDMA_PUB_REG_TYPE1__SDMA_ATOMIC_CNTL__SHIFT                                                           0x19
#define SDMA_PUB_REG_TYPE1__SDMA_ATOMIC_PREOP_LO__SHIFT                                                       0x1a
#define SDMA_PUB_REG_TYPE1__SDMA_ATOMIC_PREOP_HI__SHIFT                                                       0x1b
#define SDMA_PUB_REG_TYPE1__SDMA_UTCL1_CNTL__SHIFT                                                            0x1c
#define SDMA_PUB_REG_TYPE1__SDMA_UTCL1_WATERMK__SHIFT                                                         0x1d
#define SDMA_PUB_REG_TYPE1__SDMA_UTCL1_RD_STATUS__SHIFT                                                       0x1e
#define SDMA_PUB_REG_TYPE1__SDMA_UTCL1_WR_STATUS__SHIFT                                                       0x1f
#define SDMA_PUB_REG_TYPE1__SDMA_RB_RPTR_FETCH_HI_MASK                                                        0x00000001L
#define SDMA_PUB_REG_TYPE1__SDMA_SEM_WAIT_FAIL_TIMER_CNTL_MASK                                                0x00000002L
#define SDMA_PUB_REG_TYPE1__SDMA_RB_RPTR_FETCH_MASK                                                           0x00000004L
#define SDMA_PUB_REG_TYPE1__SDMA_IB_OFFSET_FETCH_MASK                                                         0x00000008L
#define SDMA_PUB_REG_TYPE1__SDMA_PROGRAM_MASK                                                                 0x00000010L
#define SDMA_PUB_REG_TYPE1__SDMA_STATUS_REG_MASK                                                              0x00000020L
#define SDMA_PUB_REG_TYPE1__SDMA_STATUS1_REG_MASK                                                             0x00000040L
#define SDMA_PUB_REG_TYPE1__SDMA_RD_BURST_CNTL_MASK                                                           0x00000080L
#define SDMA_PUB_REG_TYPE1__SDMA_HBM_PAGE_CONFIG_MASK                                                         0x00000100L
#define SDMA_PUB_REG_TYPE1__SDMA_UCODE_CHECKSUM_MASK                                                          0x00000200L
#define SDMA_PUB_REG_TYPE1__RESERVED_10_10_MASK                                                               0x00000400L
#define SDMA_PUB_REG_TYPE1__SDMA_FREEZE_MASK                                                                  0x00000800L
#define SDMA_PUB_REG_TYPE1__SDMA_PHASE0_QUANTUM_MASK                                                          0x00001000L
#define SDMA_PUB_REG_TYPE1__SDMA_PHASE1_QUANTUM_MASK                                                          0x00002000L
#define SDMA_PUB_REG_TYPE1__SDMA_POWER_GATING_MASK                                                            0x00004000L
#define SDMA_PUB_REG_TYPE1__SDMA_PGFSM_CONFIG_MASK                                                            0x00008000L
#define SDMA_PUB_REG_TYPE1__SDMA_PGFSM_WRITE_MASK                                                             0x00010000L
#define SDMA_PUB_REG_TYPE1__SDMA_PGFSM_READ_MASK                                                              0x00020000L
#define SDMA_PUB_REG_TYPE1__CC_SDMA_EDC_CONFIG_MASK                                                           0x00040000L
#define SDMA_PUB_REG_TYPE1__SDMA_BA_THRESHOLD_MASK                                                            0x00080000L
#define SDMA_PUB_REG_TYPE1__SDMA_ID_MASK                                                                      0x00100000L
#define SDMA_PUB_REG_TYPE1__SDMA_VERSION_MASK                                                                 0x00200000L
#define SDMA_PUB_REG_TYPE1__SDMA_EDC_COUNTER_MASK                                                             0x00400000L
#define SDMA_PUB_REG_TYPE1__SDMA_EDC_COUNTER2_MASK                                                            0x00800000L
#define SDMA_PUB_REG_TYPE1__SDMA_STATUS2_REG_MASK                                                             0x01000000L
#define SDMA_PUB_REG_TYPE1__SDMA_ATOMIC_CNTL_MASK                                                             0x02000000L
#define SDMA_PUB_REG_TYPE1__SDMA_ATOMIC_PREOP_LO_MASK                                                         0x04000000L
#define SDMA_PUB_REG_TYPE1__SDMA_ATOMIC_PREOP_HI_MASK                                                         0x08000000L
#define SDMA_PUB_REG_TYPE1__SDMA_UTCL1_CNTL_MASK                                                              0x10000000L
#define SDMA_PUB_REG_TYPE1__SDMA_UTCL1_WATERMK_MASK                                                           0x20000000L
#define SDMA_PUB_REG_TYPE1__SDMA_UTCL1_RD_STATUS_MASK                                                         0x40000000L
#define SDMA_PUB_REG_TYPE1__SDMA_UTCL1_WR_STATUS_MASK                                                         0x80000000L
//SDMA_PUB_REG_TYPE2
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_INV0__SHIFT                                                            0x0
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_INV1__SHIFT                                                            0x1
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_INV2__SHIFT                                                            0x2
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_RD_XNACK0__SHIFT                                                       0x3
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_RD_XNACK1__SHIFT                                                       0x4
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_WR_XNACK0__SHIFT                                                       0x5
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_WR_XNACK1__SHIFT                                                       0x6
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_TIMEOUT__SHIFT                                                         0x7
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_PAGE__SHIFT                                                            0x8
#define SDMA_PUB_REG_TYPE2__SDMA_POWER_CNTL_IDLE__SHIFT                                                       0x9
#define SDMA_PUB_REG_TYPE2__SDMA_RELAX_ORDERING_LUT__SHIFT                                                    0xa
#define SDMA_PUB_REG_TYPE2__SDMA_CHICKEN_BITS_2__SHIFT                                                        0xb
#define SDMA_PUB_REG_TYPE2__SDMA_STATUS3_REG__SHIFT                                                           0xc
#define SDMA_PUB_REG_TYPE2__SDMA_PHYSICAL_ADDR_LO__SHIFT                                                      0xd
#define SDMA_PUB_REG_TYPE2__SDMA_PHYSICAL_ADDR_HI__SHIFT                                                      0xe
#define SDMA_PUB_REG_TYPE2__SDMA_PHASE2_QUANTUM__SHIFT                                                        0xf
#define SDMA_PUB_REG_TYPE2__SDMA_ERROR_LOG__SHIFT                                                             0x10
#define SDMA_PUB_REG_TYPE2__SDMA_PUB_DUMMY_REG0__SHIFT                                                        0x11
#define SDMA_PUB_REG_TYPE2__SDMA_PUB_DUMMY_REG1__SHIFT                                                        0x12
#define SDMA_PUB_REG_TYPE2__SDMA_PUB_DUMMY_REG2__SHIFT                                                        0x13
#define SDMA_PUB_REG_TYPE2__SDMA_PUB_DUMMY_REG3__SHIFT                                                        0x14
#define SDMA_PUB_REG_TYPE2__SDMA_F32_COUNTER__SHIFT                                                           0x15
#define SDMA_PUB_REG_TYPE2__RESERVED_22_22__SHIFT                                                             0x16
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER0_CFG__SHIFT                                              0x17
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER1_CFG__SHIFT                                              0x18
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__SHIFT                                         0x19
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_MISC_CNTL__SHIFT                                                     0x1a
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER_LO__SHIFT                                                0x1b
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER_HI__SHIFT                                                0x1c
#define SDMA_PUB_REG_TYPE2__SDMA_CRD_CNTL__SHIFT                                                              0x1d
#define SDMA_PUB_REG_TYPE2__SDMA_GPU_IOV_VIOLATION_LOG__SHIFT                                                 0x1e
#define SDMA_PUB_REG_TYPE2__SDMA_ULV_CNTL__SHIFT                                                              0x1f
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_INV0_MASK                                                              0x00000001L
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_INV1_MASK                                                              0x00000002L
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_INV2_MASK                                                              0x00000004L
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_RD_XNACK0_MASK                                                         0x00000008L
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_RD_XNACK1_MASK                                                         0x00000010L
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_WR_XNACK0_MASK                                                         0x00000020L
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_WR_XNACK1_MASK                                                         0x00000040L
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_TIMEOUT_MASK                                                           0x00000080L
#define SDMA_PUB_REG_TYPE2__SDMA_UTCL1_PAGE_MASK                                                              0x00000100L
#define SDMA_PUB_REG_TYPE2__SDMA_POWER_CNTL_IDLE_MASK                                                         0x00000200L
#define SDMA_PUB_REG_TYPE2__SDMA_RELAX_ORDERING_LUT_MASK                                                      0x00000400L
#define SDMA_PUB_REG_TYPE2__SDMA_CHICKEN_BITS_2_MASK                                                          0x00000800L
#define SDMA_PUB_REG_TYPE2__SDMA_STATUS3_REG_MASK                                                             0x00001000L
#define SDMA_PUB_REG_TYPE2__SDMA_PHYSICAL_ADDR_LO_MASK                                                        0x00002000L
#define SDMA_PUB_REG_TYPE2__SDMA_PHYSICAL_ADDR_HI_MASK                                                        0x00004000L
#define SDMA_PUB_REG_TYPE2__SDMA_PHASE2_QUANTUM_MASK                                                          0x00008000L
#define SDMA_PUB_REG_TYPE2__SDMA_ERROR_LOG_MASK                                                               0x00010000L
#define SDMA_PUB_REG_TYPE2__SDMA_PUB_DUMMY_REG0_MASK                                                          0x00020000L
#define SDMA_PUB_REG_TYPE2__SDMA_PUB_DUMMY_REG1_MASK                                                          0x00040000L
#define SDMA_PUB_REG_TYPE2__SDMA_PUB_DUMMY_REG2_MASK                                                          0x00080000L
#define SDMA_PUB_REG_TYPE2__SDMA_PUB_DUMMY_REG3_MASK                                                          0x00100000L
#define SDMA_PUB_REG_TYPE2__SDMA_F32_COUNTER_MASK                                                             0x00200000L
#define SDMA_PUB_REG_TYPE2__RESERVED_22_22_MASK                                                               0x00400000L
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER0_CFG_MASK                                                0x00800000L
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER1_CFG_MASK                                                0x01000000L
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL_MASK                                           0x02000000L
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_MISC_CNTL_MASK                                                       0x04000000L
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER_LO_MASK                                                  0x08000000L
#define SDMA_PUB_REG_TYPE2__SDMA_PERFCNT_PERFCOUNTER_HI_MASK                                                  0x10000000L
#define SDMA_PUB_REG_TYPE2__SDMA_CRD_CNTL_MASK                                                                0x20000000L
#define SDMA_PUB_REG_TYPE2__SDMA_GPU_IOV_VIOLATION_LOG_MASK                                                   0x40000000L
#define SDMA_PUB_REG_TYPE2__SDMA_ULV_CNTL_MASK                                                                0x80000000L
//SDMA_PUB_REG_TYPE3
#define SDMA_PUB_REG_TYPE3__SDMA_EA_DBIT_ADDR_DATA__SHIFT                                                     0x0
#define SDMA_PUB_REG_TYPE3__SDMA_EA_DBIT_ADDR_INDEX__SHIFT                                                    0x1
#define SDMA_PUB_REG_TYPE3__SDMA_GPU_IOV_VIOLATION_LOG2__SHIFT                                                0x2
#define SDMA_PUB_REG_TYPE3__SDMA_STATUS4_REG__SHIFT                                                           0x3
#define SDMA_PUB_REG_TYPE3__SDMA_SCRATCH_RAM_DATA__SHIFT                                                      0x4
#define SDMA_PUB_REG_TYPE3__SDMA_SCRATCH_RAM_ADDR__SHIFT                                                      0x5
#define SDMA_PUB_REG_TYPE3__SDMA_CE_CTRL__SHIFT                                                               0x6
#define SDMA_PUB_REG_TYPE3__SDMA_RAS_STATUS__SHIFT                                                            0x7
#define SDMA_PUB_REG_TYPE3__SDMA_CLK_STATUS__SHIFT                                                            0x8
#define SDMA_PUB_REG_TYPE3__SDMA_POWER_CNTL__SHIFT                                                            0xb
#define SDMA_PUB_REG_TYPE3__SDMA_CLK_CTRL__SHIFT                                                              0xc
#define SDMA_PUB_REG_TYPE3__SDMA_CNTL__SHIFT                                                                  0xd
#define SDMA_PUB_REG_TYPE3__SDMA_CHICKEN_BITS__SHIFT                                                          0xe
#define SDMA_PUB_REG_TYPE3__SDMA_GB_ADDR_CONFIG__SHIFT                                                        0xf
#define SDMA_PUB_REG_TYPE3__SDMA_GB_ADDR_CONFIG_READ__SHIFT                                                   0x10
#define SDMA_PUB_REG_TYPE3__RESERVED__SHIFT                                                                   0x13
#define SDMA_PUB_REG_TYPE3__SDMA_EA_DBIT_ADDR_DATA_MASK                                                       0x00000001L
#define SDMA_PUB_REG_TYPE3__SDMA_EA_DBIT_ADDR_INDEX_MASK                                                      0x00000002L
#define SDMA_PUB_REG_TYPE3__SDMA_GPU_IOV_VIOLATION_LOG2_MASK                                                  0x00000004L
#define SDMA_PUB_REG_TYPE3__SDMA_STATUS4_REG_MASK                                                             0x00000008L
#define SDMA_PUB_REG_TYPE3__SDMA_SCRATCH_RAM_DATA_MASK                                                        0x00000010L
#define SDMA_PUB_REG_TYPE3__SDMA_SCRATCH_RAM_ADDR_MASK                                                        0x00000020L
#define SDMA_PUB_REG_TYPE3__SDMA_CE_CTRL_MASK                                                                 0x00000040L
#define SDMA_PUB_REG_TYPE3__SDMA_RAS_STATUS_MASK                                                              0x00000080L
#define SDMA_PUB_REG_TYPE3__SDMA_CLK_STATUS_MASK                                                              0x00000100L
#define SDMA_PUB_REG_TYPE3__SDMA_POWER_CNTL_MASK                                                              0x00000800L
#define SDMA_PUB_REG_TYPE3__SDMA_CLK_CTRL_MASK                                                                0x00001000L
#define SDMA_PUB_REG_TYPE3__SDMA_CNTL_MASK                                                                    0x00002000L
#define SDMA_PUB_REG_TYPE3__SDMA_CHICKEN_BITS_MASK                                                            0x00004000L
#define SDMA_PUB_REG_TYPE3__SDMA_GB_ADDR_CONFIG_MASK                                                          0x00008000L
#define SDMA_PUB_REG_TYPE3__SDMA_GB_ADDR_CONFIG_READ_MASK                                                     0x00010000L
#define SDMA_PUB_REG_TYPE3__RESERVED_MASK                                                                     0xFFF80000L
//SDMA_CONTEXT_GROUP_BOUNDARY
#define SDMA_CONTEXT_GROUP_BOUNDARY__RESERVED__SHIFT                                                          0x0
#define SDMA_CONTEXT_GROUP_BOUNDARY__RESERVED_MASK                                                            0xFFFFFFFFL
//SDMA_RB_RPTR_FETCH_HI
#define SDMA_RB_RPTR_FETCH_HI__OFFSET__SHIFT                                                                  0x0
#define SDMA_RB_RPTR_FETCH_HI__OFFSET_MASK                                                                    0xFFFFFFFFL
//SDMA_SEM_WAIT_FAIL_TIMER_CNTL
#define SDMA_SEM_WAIT_FAIL_TIMER_CNTL__TIMER__SHIFT                                                           0x0
#define SDMA_SEM_WAIT_FAIL_TIMER_CNTL__TIMER_MASK                                                             0xFFFFFFFFL
//SDMA_RB_RPTR_FETCH
#define SDMA_RB_RPTR_FETCH__OFFSET__SHIFT                                                                     0x2
#define SDMA_RB_RPTR_FETCH__OFFSET_MASK                                                                       0xFFFFFFFCL
//SDMA_IB_OFFSET_FETCH
#define SDMA_IB_OFFSET_FETCH__OFFSET__SHIFT                                                                   0x2
#define SDMA_IB_OFFSET_FETCH__OFFSET_MASK                                                                     0x003FFFFCL
//SDMA_PROGRAM
#define SDMA_PROGRAM__STREAM__SHIFT                                                                           0x0
#define SDMA_PROGRAM__STREAM_MASK                                                                             0xFFFFFFFFL
//SDMA_STATUS_REG
#define SDMA_STATUS_REG__IDLE__SHIFT                                                                          0x0
#define SDMA_STATUS_REG__REG_IDLE__SHIFT                                                                      0x1
#define SDMA_STATUS_REG__RB_EMPTY__SHIFT                                                                      0x2
#define SDMA_STATUS_REG__RB_FULL__SHIFT                                                                       0x3
#define SDMA_STATUS_REG__RB_CMD_IDLE__SHIFT                                                                   0x4
#define SDMA_STATUS_REG__RB_CMD_FULL__SHIFT                                                                   0x5
#define SDMA_STATUS_REG__IB_CMD_IDLE__SHIFT                                                                   0x6
#define SDMA_STATUS_REG__IB_CMD_FULL__SHIFT                                                                   0x7
#define SDMA_STATUS_REG__BLOCK_IDLE__SHIFT                                                                    0x8
#define SDMA_STATUS_REG__INSIDE_IB__SHIFT                                                                     0x9
#define SDMA_STATUS_REG__EX_IDLE__SHIFT                                                                       0xa
#define SDMA_STATUS_REG__EX_IDLE_POLL_TIMER_EXPIRE__SHIFT                                                     0xb
#define SDMA_STATUS_REG__PACKET_READY__SHIFT                                                                  0xc
#define SDMA_STATUS_REG__MC_WR_IDLE__SHIFT                                                                    0xd
#define SDMA_STATUS_REG__SRBM_IDLE__SHIFT                                                                     0xe
#define SDMA_STATUS_REG__CONTEXT_EMPTY__SHIFT                                                                 0xf
#define SDMA_STATUS_REG__DELTA_RPTR_FULL__SHIFT                                                               0x10
#define SDMA_STATUS_REG__RB_MC_RREQ_IDLE__SHIFT                                                               0x11
#define SDMA_STATUS_REG__IB_MC_RREQ_IDLE__SHIFT                                                               0x12
#define SDMA_STATUS_REG__MC_RD_IDLE__SHIFT                                                                    0x13
#define SDMA_STATUS_REG__DELTA_RPTR_EMPTY__SHIFT                                                              0x14
#define SDMA_STATUS_REG__MC_RD_RET_STALL__SHIFT                                                               0x15
#define SDMA_STATUS_REG__MC_RD_NO_POLL_IDLE__SHIFT                                                            0x16
#define SDMA_STATUS_REG__DRM_IDLE__SHIFT                                                                      0x17
#define SDMA_STATUS_REG__DRM_MASK_FULL__SHIFT                                                                 0x18
#define SDMA_STATUS_REG__PREV_CMD_IDLE__SHIFT                                                                 0x19
#define SDMA_STATUS_REG__SEM_IDLE__SHIFT                                                                      0x1a
#define SDMA_STATUS_REG__SEM_REQ_STALL__SHIFT                                                                 0x1b
#define SDMA_STATUS_REG__SEM_RESP_STATE__SHIFT                                                                0x1c
#define SDMA_STATUS_REG__INT_IDLE__SHIFT                                                                      0x1e
#define SDMA_STATUS_REG__INT_REQ_STALL__SHIFT                                                                 0x1f
#define SDMA_STATUS_REG__IDLE_MASK                                                                            0x00000001L
#define SDMA_STATUS_REG__REG_IDLE_MASK                                                                        0x00000002L
#define SDMA_STATUS_REG__RB_EMPTY_MASK                                                                        0x00000004L
#define SDMA_STATUS_REG__RB_FULL_MASK                                                                         0x00000008L
#define SDMA_STATUS_REG__RB_CMD_IDLE_MASK                                                                     0x00000010L
#define SDMA_STATUS_REG__RB_CMD_FULL_MASK                                                                     0x00000020L
#define SDMA_STATUS_REG__IB_CMD_IDLE_MASK                                                                     0x00000040L
#define SDMA_STATUS_REG__IB_CMD_FULL_MASK                                                                     0x00000080L
#define SDMA_STATUS_REG__BLOCK_IDLE_MASK                                                                      0x00000100L
#define SDMA_STATUS_REG__INSIDE_IB_MASK                                                                       0x00000200L
#define SDMA_STATUS_REG__EX_IDLE_MASK                                                                         0x00000400L
#define SDMA_STATUS_REG__EX_IDLE_POLL_TIMER_EXPIRE_MASK                                                       0x00000800L
#define SDMA_STATUS_REG__PACKET_READY_MASK                                                                    0x00001000L
#define SDMA_STATUS_REG__MC_WR_IDLE_MASK                                                                      0x00002000L
#define SDMA_STATUS_REG__SRBM_IDLE_MASK                                                                       0x00004000L
#define SDMA_STATUS_REG__CONTEXT_EMPTY_MASK                                                                   0x00008000L
#define SDMA_STATUS_REG__DELTA_RPTR_FULL_MASK                                                                 0x00010000L
#define SDMA_STATUS_REG__RB_MC_RREQ_IDLE_MASK                                                                 0x00020000L
#define SDMA_STATUS_REG__IB_MC_RREQ_IDLE_MASK                                                                 0x00040000L
#define SDMA_STATUS_REG__MC_RD_IDLE_MASK                                                                      0x00080000L
#define SDMA_STATUS_REG__DELTA_RPTR_EMPTY_MASK                                                                0x00100000L
#define SDMA_STATUS_REG__MC_RD_RET_STALL_MASK                                                                 0x00200000L
#define SDMA_STATUS_REG__MC_RD_NO_POLL_IDLE_MASK                                                              0x00400000L
#define SDMA_STATUS_REG__DRM_IDLE_MASK                                                                        0x00800000L
#define SDMA_STATUS_REG__DRM_MASK_FULL_MASK                                                                   0x01000000L
#define SDMA_STATUS_REG__PREV_CMD_IDLE_MASK                                                                   0x02000000L
#define SDMA_STATUS_REG__SEM_IDLE_MASK                                                                        0x04000000L
#define SDMA_STATUS_REG__SEM_REQ_STALL_MASK                                                                   0x08000000L
#define SDMA_STATUS_REG__SEM_RESP_STATE_MASK                                                                  0x30000000L
#define SDMA_STATUS_REG__INT_IDLE_MASK                                                                        0x40000000L
#define SDMA_STATUS_REG__INT_REQ_STALL_MASK                                                                   0x80000000L
//SDMA_STATUS1_REG
#define SDMA_STATUS1_REG__CE_WREQ_IDLE__SHIFT                                                                 0x0
#define SDMA_STATUS1_REG__CE_WR_IDLE__SHIFT                                                                   0x1
#define SDMA_STATUS1_REG__CE_SPLIT_IDLE__SHIFT                                                                0x2
#define SDMA_STATUS1_REG__CE_RREQ_IDLE__SHIFT                                                                 0x3
#define SDMA_STATUS1_REG__CE_OUT_IDLE__SHIFT                                                                  0x4
#define SDMA_STATUS1_REG__CE_IN_IDLE__SHIFT                                                                   0x5
#define SDMA_STATUS1_REG__CE_DST_IDLE__SHIFT                                                                  0x6
#define SDMA_STATUS1_REG__CE_DRM_IDLE__SHIFT                                                                  0x7
#define SDMA_STATUS1_REG__CE_DRM1_IDLE__SHIFT                                                                 0x8
#define SDMA_STATUS1_REG__CE_CMD_IDLE__SHIFT                                                                  0x9
#define SDMA_STATUS1_REG__CE_AFIFO_FULL__SHIFT                                                                0xa
#define SDMA_STATUS1_REG__CE_DRM_FULL__SHIFT                                                                  0xb
#define SDMA_STATUS1_REG__CE_DRM1_FULL__SHIFT                                                                 0xc
#define SDMA_STATUS1_REG__CE_INFO_FULL__SHIFT                                                                 0xd
#define SDMA_STATUS1_REG__CE_INFO1_FULL__SHIFT                                                                0xe
#define SDMA_STATUS1_REG__EX_START__SHIFT                                                                     0xf
#define SDMA_STATUS1_REG__DRM_CTX_RESTORE__SHIFT                                                              0x10
#define SDMA_STATUS1_REG__CE_RD_STALL__SHIFT                                                                  0x11
#define SDMA_STATUS1_REG__CE_WR_STALL__SHIFT                                                                  0x12
#define SDMA_STATUS1_REG__CE_WREQ_IDLE_MASK                                                                   0x00000001L
#define SDMA_STATUS1_REG__CE_WR_IDLE_MASK                                                                     0x00000002L
#define SDMA_STATUS1_REG__CE_SPLIT_IDLE_MASK                                                                  0x00000004L
#define SDMA_STATUS1_REG__CE_RREQ_IDLE_MASK                                                                   0x00000008L
#define SDMA_STATUS1_REG__CE_OUT_IDLE_MASK                                                                    0x00000010L
#define SDMA_STATUS1_REG__CE_IN_IDLE_MASK                                                                     0x00000020L
#define SDMA_STATUS1_REG__CE_DST_IDLE_MASK                                                                    0x00000040L
#define SDMA_STATUS1_REG__CE_DRM_IDLE_MASK                                                                    0x00000080L
#define SDMA_STATUS1_REG__CE_DRM1_IDLE_MASK                                                                   0x00000100L
#define SDMA_STATUS1_REG__CE_CMD_IDLE_MASK                                                                    0x00000200L
#define SDMA_STATUS1_REG__CE_AFIFO_FULL_MASK                                                                  0x00000400L
#define SDMA_STATUS1_REG__CE_DRM_FULL_MASK                                                                    0x00000800L
#define SDMA_STATUS1_REG__CE_DRM1_FULL_MASK                                                                   0x00001000L
#define SDMA_STATUS1_REG__CE_INFO_FULL_MASK                                                                   0x00002000L
#define SDMA_STATUS1_REG__CE_INFO1_FULL_MASK                                                                  0x00004000L
#define SDMA_STATUS1_REG__EX_START_MASK                                                                       0x00008000L
#define SDMA_STATUS1_REG__DRM_CTX_RESTORE_MASK                                                                0x00010000L
#define SDMA_STATUS1_REG__CE_RD_STALL_MASK                                                                    0x00020000L
#define SDMA_STATUS1_REG__CE_WR_STALL_MASK                                                                    0x00040000L
//SDMA_RD_BURST_CNTL
#define SDMA_RD_BURST_CNTL__RD_BURST__SHIFT                                                                   0x0
#define SDMA_RD_BURST_CNTL__CMD_BUFFER_RD_BURST__SHIFT                                                        0x2
#define SDMA_RD_BURST_CNTL__RD_BURST_MASK                                                                     0x00000003L
#define SDMA_RD_BURST_CNTL__CMD_BUFFER_RD_BURST_MASK                                                          0x0000000CL
//SDMA_HBM_PAGE_CONFIG
#define SDMA_HBM_PAGE_CONFIG__PAGE_SIZE_EXPONENT__SHIFT                                                       0x0
#define SDMA_HBM_PAGE_CONFIG__PAGE_SIZE_EXPONENT_MASK                                                         0x00000003L
//SDMA_UCODE_CHECKSUM
#define SDMA_UCODE_CHECKSUM__DATA__SHIFT                                                                      0x0
#define SDMA_UCODE_CHECKSUM__DATA_MASK                                                                        0xFFFFFFFFL
//SDMA_FREEZE
#define SDMA_FREEZE__PREEMPT__SHIFT                                                                           0x0
#define SDMA_FREEZE__FREEZE__SHIFT                                                                            0x4
#define SDMA_FREEZE__FROZEN__SHIFT                                                                            0x5
#define SDMA_FREEZE__F32_FREEZE__SHIFT                                                                        0x6
#define SDMA_FREEZE__PREEMPT_MASK                                                                             0x00000001L
#define SDMA_FREEZE__FREEZE_MASK                                                                              0x00000010L
#define SDMA_FREEZE__FROZEN_MASK                                                                              0x00000020L
#define SDMA_FREEZE__F32_FREEZE_MASK                                                                          0x00000040L
//SDMA_PHASE0_QUANTUM
#define SDMA_PHASE0_QUANTUM__UNIT__SHIFT                                                                      0x0
#define SDMA_PHASE0_QUANTUM__VALUE__SHIFT                                                                     0x8
#define SDMA_PHASE0_QUANTUM__PREFER__SHIFT                                                                    0x1e
#define SDMA_PHASE0_QUANTUM__UNIT_MASK                                                                        0x0000000FL
#define SDMA_PHASE0_QUANTUM__VALUE_MASK                                                                       0x00FFFF00L
#define SDMA_PHASE0_QUANTUM__PREFER_MASK                                                                      0x40000000L
//SDMA_PHASE1_QUANTUM
#define SDMA_PHASE1_QUANTUM__UNIT__SHIFT                                                                      0x0
#define SDMA_PHASE1_QUANTUM__VALUE__SHIFT                                                                     0x8
#define SDMA_PHASE1_QUANTUM__PREFER__SHIFT                                                                    0x1e
#define SDMA_PHASE1_QUANTUM__UNIT_MASK                                                                        0x0000000FL
#define SDMA_PHASE1_QUANTUM__VALUE_MASK                                                                       0x00FFFF00L
#define SDMA_PHASE1_QUANTUM__PREFER_MASK                                                                      0x40000000L
//SDMA_POWER_GATING
#define SDMA_POWER_GATING__SDMA_POWER_OFF_CONDITION__SHIFT                                                    0x0
#define SDMA_POWER_GATING__SDMA_POWER_ON_CONDITION__SHIFT                                                     0x1
#define SDMA_POWER_GATING__SDMA_POWER_OFF_REQ__SHIFT                                                          0x2
#define SDMA_POWER_GATING__SDMA_POWER_ON_REQ__SHIFT                                                           0x3
#define SDMA_POWER_GATING__PG_CNTL_STATUS__SHIFT                                                              0x4
#define SDMA_POWER_GATING__SDMA_POWER_OFF_CONDITION_MASK                                                      0x00000001L
#define SDMA_POWER_GATING__SDMA_POWER_ON_CONDITION_MASK                                                       0x00000002L
#define SDMA_POWER_GATING__SDMA_POWER_OFF_REQ_MASK                                                            0x00000004L
#define SDMA_POWER_GATING__SDMA_POWER_ON_REQ_MASK                                                             0x00000008L
#define SDMA_POWER_GATING__PG_CNTL_STATUS_MASK                                                                0x00000030L
//SDMA_PGFSM_CONFIG
#define SDMA_PGFSM_CONFIG__FSM_ADDR__SHIFT                                                                    0x0
#define SDMA_PGFSM_CONFIG__POWER_DOWN__SHIFT                                                                  0x8
#define SDMA_PGFSM_CONFIG__POWER_UP__SHIFT                                                                    0x9
#define SDMA_PGFSM_CONFIG__P1_SELECT__SHIFT                                                                   0xa
#define SDMA_PGFSM_CONFIG__P2_SELECT__SHIFT                                                                   0xb
#define SDMA_PGFSM_CONFIG__WRITE__SHIFT                                                                       0xc
#define SDMA_PGFSM_CONFIG__READ__SHIFT                                                                        0xd
#define SDMA_PGFSM_CONFIG__SRBM_OVERRIDE__SHIFT                                                               0x1b
#define SDMA_PGFSM_CONFIG__REG_ADDR__SHIFT                                                                    0x1c
#define SDMA_PGFSM_CONFIG__FSM_ADDR_MASK                                                                      0x000000FFL
#define SDMA_PGFSM_CONFIG__POWER_DOWN_MASK                                                                    0x00000100L
#define SDMA_PGFSM_CONFIG__POWER_UP_MASK                                                                      0x00000200L
#define SDMA_PGFSM_CONFIG__P1_SELECT_MASK                                                                     0x00000400L
#define SDMA_PGFSM_CONFIG__P2_SELECT_MASK                                                                     0x00000800L
#define SDMA_PGFSM_CONFIG__WRITE_MASK                                                                         0x00001000L
#define SDMA_PGFSM_CONFIG__READ_MASK                                                                          0x00002000L
#define SDMA_PGFSM_CONFIG__SRBM_OVERRIDE_MASK                                                                 0x08000000L
#define SDMA_PGFSM_CONFIG__REG_ADDR_MASK                                                                      0xF0000000L
//SDMA_PGFSM_WRITE
#define SDMA_PGFSM_WRITE__VALUE__SHIFT                                                                        0x0
#define SDMA_PGFSM_WRITE__VALUE_MASK                                                                          0xFFFFFFFFL
//SDMA_PGFSM_READ
#define SDMA_PGFSM_READ__VALUE__SHIFT                                                                         0x0
#define SDMA_PGFSM_READ__VALUE_MASK                                                                           0x00FFFFFFL
//CC_SDMA_EDC_CONFIG
#define CC_SDMA_EDC_CONFIG__WRITE_DIS__SHIFT                                                                  0x0
#define CC_SDMA_EDC_CONFIG__DIS_EDC__SHIFT                                                                    0x1
#define CC_SDMA_EDC_CONFIG__WRITE_DIS_MASK                                                                    0x00000001L
#define CC_SDMA_EDC_CONFIG__DIS_EDC_MASK                                                                      0x00000002L
//SDMA_BA_THRESHOLD
#define SDMA_BA_THRESHOLD__READ_THRES__SHIFT                                                                  0x0
#define SDMA_BA_THRESHOLD__WRITE_THRES__SHIFT                                                                 0x10
#define SDMA_BA_THRESHOLD__READ_THRES_MASK                                                                    0x000003FFL
#define SDMA_BA_THRESHOLD__WRITE_THRES_MASK                                                                   0x03FF0000L
//SDMA_ID
#define SDMA_ID__DEVICE_ID__SHIFT                                                                             0x0
#define SDMA_ID__DEVICE_ID_MASK                                                                               0x000000FFL
//SDMA_VERSION
#define SDMA_VERSION__MINVER__SHIFT                                                                           0x0
#define SDMA_VERSION__MAJVER__SHIFT                                                                           0x8
#define SDMA_VERSION__REV__SHIFT                                                                              0x10
#define SDMA_VERSION__MINVER_MASK                                                                             0x0000007FL
#define SDMA_VERSION__MAJVER_MASK                                                                             0x00007F00L
#define SDMA_VERSION__REV_MASK                                                                                0x003F0000L
//SDMA_EDC_COUNTER
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF0_SED__SHIFT                                                     0x0
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF1_SED__SHIFT                                                     0x2
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF2_SED__SHIFT                                                     0x4
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF3_SED__SHIFT                                                     0x6
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF4_SED__SHIFT                                                     0x8
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF5_SED__SHIFT                                                     0xa
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF6_SED__SHIFT                                                     0xc
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF7_SED__SHIFT                                                     0xe
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF8_SED__SHIFT                                                     0x10
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF9_SED__SHIFT                                                     0x12
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF10_SED__SHIFT                                                    0x14
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF11_SED__SHIFT                                                    0x16
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF12_SED__SHIFT                                                    0x18
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF13_SED__SHIFT                                                    0x1a
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF14_SED__SHIFT                                                    0x1c
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF15_SED__SHIFT                                                    0x1e
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF0_SED_MASK                                                       0x00000003L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF1_SED_MASK                                                       0x0000000CL
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF2_SED_MASK                                                       0x00000030L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF3_SED_MASK                                                       0x000000C0L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF4_SED_MASK                                                       0x00000300L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF5_SED_MASK                                                       0x00000C00L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF6_SED_MASK                                                       0x00003000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF7_SED_MASK                                                       0x0000C000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF8_SED_MASK                                                       0x00030000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF9_SED_MASK                                                       0x000C0000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF10_SED_MASK                                                      0x00300000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF11_SED_MASK                                                      0x00C00000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF12_SED_MASK                                                      0x03000000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF13_SED_MASK                                                      0x0C000000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF14_SED_MASK                                                      0x30000000L
#define SDMA_EDC_COUNTER__SDMA_MBANK_DATA_BUF15_SED_MASK                                                      0xC0000000L
//SDMA_EDC_COUNTER2
#define SDMA_EDC_COUNTER2__SDMA_UCODE_BUF_SED__SHIFT                                                          0x0
#define SDMA_EDC_COUNTER2__SDMA_RB_CMD_BUF_SED__SHIFT                                                         0x2
#define SDMA_EDC_COUNTER2__SDMA_IB_CMD_BUF_SED__SHIFT                                                         0x4
#define SDMA_EDC_COUNTER2__SDMA_UTCL1_RD_FIFO_SED__SHIFT                                                      0x6
#define SDMA_EDC_COUNTER2__SDMA_UTCL1_RDBST_FIFO_SED__SHIFT                                                   0x8
#define SDMA_EDC_COUNTER2__SDMA_UTCL1_WR_FIFO_SED__SHIFT                                                      0xa
#define SDMA_EDC_COUNTER2__SDMA_DATA_LUT_FIFO_SED__SHIFT                                                      0xc
#define SDMA_EDC_COUNTER2__SDMA_SPLIT_DATA_BUF_SED__SHIFT                                                     0xe
#define SDMA_EDC_COUNTER2__SDMA_MC_WR_ADDR_FIFO_SED__SHIFT                                                    0x10
#define SDMA_EDC_COUNTER2__SDMA_MC_RDRET_BUF_SED__SHIFT                                                       0x12
#define SDMA_EDC_COUNTER2__SDMA_UCODE_BUF_SED_MASK                                                            0x00000003L
#define SDMA_EDC_COUNTER2__SDMA_RB_CMD_BUF_SED_MASK                                                           0x0000000CL
#define SDMA_EDC_COUNTER2__SDMA_IB_CMD_BUF_SED_MASK                                                           0x00000030L
#define SDMA_EDC_COUNTER2__SDMA_UTCL1_RD_FIFO_SED_MASK                                                        0x000000C0L
#define SDMA_EDC_COUNTER2__SDMA_UTCL1_RDBST_FIFO_SED_MASK                                                     0x00000300L
#define SDMA_EDC_COUNTER2__SDMA_UTCL1_WR_FIFO_SED_MASK                                                        0x00000C00L
#define SDMA_EDC_COUNTER2__SDMA_DATA_LUT_FIFO_SED_MASK                                                        0x00003000L
#define SDMA_EDC_COUNTER2__SDMA_SPLIT_DATA_BUF_SED_MASK                                                       0x0000C000L
#define SDMA_EDC_COUNTER2__SDMA_MC_WR_ADDR_FIFO_SED_MASK                                                      0x00030000L
#define SDMA_EDC_COUNTER2__SDMA_MC_RDRET_BUF_SED_MASK                                                         0x000C0000L
//SDMA_STATUS2_REG
#define SDMA_STATUS2_REG__ID__SHIFT                                                                           0x0
#define SDMA_STATUS2_REG__F32_INSTR_PTR__SHIFT                                                                0x3
#define SDMA_STATUS2_REG__CMD_OP__SHIFT                                                                       0x10
#define SDMA_STATUS2_REG__ID_MASK                                                                             0x00000007L
#define SDMA_STATUS2_REG__F32_INSTR_PTR_MASK                                                                  0x0000FFF8L
#define SDMA_STATUS2_REG__CMD_OP_MASK                                                                         0xFFFF0000L
//SDMA_ATOMIC_CNTL
#define SDMA_ATOMIC_CNTL__LOOP_TIMER__SHIFT                                                                   0x0
#define SDMA_ATOMIC_CNTL__ATOMIC_RTN_INT_ENABLE__SHIFT                                                        0x1f
#define SDMA_ATOMIC_CNTL__LOOP_TIMER_MASK                                                                     0x7FFFFFFFL
#define SDMA_ATOMIC_CNTL__ATOMIC_RTN_INT_ENABLE_MASK                                                          0x80000000L
//SDMA_ATOMIC_PREOP_LO
#define SDMA_ATOMIC_PREOP_LO__DATA__SHIFT                                                                     0x0
#define SDMA_ATOMIC_PREOP_LO__DATA_MASK                                                                       0xFFFFFFFFL
//SDMA_ATOMIC_PREOP_HI
#define SDMA_ATOMIC_PREOP_HI__DATA__SHIFT                                                                     0x0
#define SDMA_ATOMIC_PREOP_HI__DATA_MASK                                                                       0xFFFFFFFFL
//SDMA_UTCL1_CNTL
#define SDMA_UTCL1_CNTL__REDO_ENABLE__SHIFT                                                                   0x0
#define SDMA_UTCL1_CNTL__REDO_DELAY__SHIFT                                                                    0x1
#define SDMA_UTCL1_CNTL__REDO_WATERMK__SHIFT                                                                  0xb
#define SDMA_UTCL1_CNTL__INVACK_DELAY__SHIFT                                                                  0xe
#define SDMA_UTCL1_CNTL__REQL2_CREDIT__SHIFT                                                                  0x18
#define SDMA_UTCL1_CNTL__VADDR_WATERMK__SHIFT                                                                 0x1d
#define SDMA_UTCL1_CNTL__REDO_ENABLE_MASK                                                                     0x00000001L
#define SDMA_UTCL1_CNTL__REDO_DELAY_MASK                                                                      0x000007FEL
#define SDMA_UTCL1_CNTL__REDO_WATERMK_MASK                                                                    0x00003800L
#define SDMA_UTCL1_CNTL__INVACK_DELAY_MASK                                                                    0x00FFC000L
#define SDMA_UTCL1_CNTL__REQL2_CREDIT_MASK                                                                    0x1F000000L
#define SDMA_UTCL1_CNTL__VADDR_WATERMK_MASK                                                                   0xE0000000L
//SDMA_UTCL1_WATERMK
#define SDMA_UTCL1_WATERMK__REQ_WATERMK__SHIFT                                                                0x0
#define SDMA_UTCL1_WATERMK__REQ_DEPTH__SHIFT                                                                  0x3
#define SDMA_UTCL1_WATERMK__PAGE_WATERMK__SHIFT                                                               0x5
#define SDMA_UTCL1_WATERMK__INVREQ_WATERMK__SHIFT                                                             0x8
#define SDMA_UTCL1_WATERMK__RESERVED__SHIFT                                                                   0x10
#define SDMA_UTCL1_WATERMK__REQ_WATERMK_MASK                                                                  0x00000007L
#define SDMA_UTCL1_WATERMK__REQ_DEPTH_MASK                                                                    0x00000018L
#define SDMA_UTCL1_WATERMK__PAGE_WATERMK_MASK                                                                 0x000000E0L
#define SDMA_UTCL1_WATERMK__INVREQ_WATERMK_MASK                                                               0x0000FF00L
#define SDMA_UTCL1_WATERMK__RESERVED_MASK                                                                     0xFFFF0000L
//SDMA_UTCL1_RD_STATUS
#define SDMA_UTCL1_RD_STATUS__RQMC_RET_ADDR_FIFO_EMPTY__SHIFT                                                 0x0
#define SDMA_UTCL1_RD_STATUS__RQMC_REQ_FIFO_EMPTY__SHIFT                                                      0x1
#define SDMA_UTCL1_RD_STATUS__RTPG_RET_BUF_EMPTY__SHIFT                                                       0x2
#define SDMA_UTCL1_RD_STATUS__RTPG_VADDR_FIFO_EMPTY__SHIFT                                                    0x3
#define SDMA_UTCL1_RD_STATUS__RQPG_HEAD_VIRT_FIFO_EMPTY__SHIFT                                                0x4
#define SDMA_UTCL1_RD_STATUS__RQPG_REDO_FIFO_EMPTY__SHIFT                                                     0x5
#define SDMA_UTCL1_RD_STATUS__RQPG_REQPAGE_FIFO_EMPTY__SHIFT                                                  0x6
#define SDMA_UTCL1_RD_STATUS__RQPG_XNACK_FIFO_EMPTY__SHIFT                                                    0x7
#define SDMA_UTCL1_RD_STATUS__RQPG_INVREQ_FIFO_EMPTY__SHIFT                                                   0x8
#define SDMA_UTCL1_RD_STATUS__RQMC_RET_ADDR_FIFO_FULL__SHIFT                                                  0x9
#define SDMA_UTCL1_RD_STATUS__RQMC_REQ_FIFO_FULL__SHIFT                                                       0xa
#define SDMA_UTCL1_RD_STATUS__RTPG_RET_BUF_FULL__SHIFT                                                        0xb
#define SDMA_UTCL1_RD_STATUS__RTPG_VADDR_FIFO_FULL__SHIFT                                                     0xc
#define SDMA_UTCL1_RD_STATUS__RQPG_HEAD_VIRT_FIFO_FULL__SHIFT                                                 0xd
#define SDMA_UTCL1_RD_STATUS__RQPG_REDO_FIFO_FULL__SHIFT                                                      0xe
#define SDMA_UTCL1_RD_STATUS__RQPG_REQPAGE_FIFO_FULL__SHIFT                                                   0xf
#define SDMA_UTCL1_RD_STATUS__RQPG_XNACK_FIFO_FULL__SHIFT                                                     0x10
#define SDMA_UTCL1_RD_STATUS__RQPG_INVREQ_FIFO_FULL__SHIFT                                                    0x11
#define SDMA_UTCL1_RD_STATUS__PAGE_FAULT__SHIFT                                                               0x12
#define SDMA_UTCL1_RD_STATUS__PAGE_NULL__SHIFT                                                                0x13
#define SDMA_UTCL1_RD_STATUS__REQL2_IDLE__SHIFT                                                               0x14
#define SDMA_UTCL1_RD_STATUS__CE_L1_STALL__SHIFT                                                              0x15
#define SDMA_UTCL1_RD_STATUS__NEXT_RD_VECTOR__SHIFT                                                           0x16
#define SDMA_UTCL1_RD_STATUS__MERGE_STATE__SHIFT                                                              0x1a
#define SDMA_UTCL1_RD_STATUS__ADDR_RD_RTR__SHIFT                                                              0x1d
#define SDMA_UTCL1_RD_STATUS__WPTR_POLLING__SHIFT                                                             0x1e
#define SDMA_UTCL1_RD_STATUS__INVREQ_SIZE__SHIFT                                                              0x1f
#define SDMA_UTCL1_RD_STATUS__RQMC_RET_ADDR_FIFO_EMPTY_MASK                                                   0x00000001L
#define SDMA_UTCL1_RD_STATUS__RQMC_REQ_FIFO_EMPTY_MASK                                                        0x00000002L
#define SDMA_UTCL1_RD_STATUS__RTPG_RET_BUF_EMPTY_MASK                                                         0x00000004L
#define SDMA_UTCL1_RD_STATUS__RTPG_VADDR_FIFO_EMPTY_MASK                                                      0x00000008L
#define SDMA_UTCL1_RD_STATUS__RQPG_HEAD_VIRT_FIFO_EMPTY_MASK                                                  0x00000010L
#define SDMA_UTCL1_RD_STATUS__RQPG_REDO_FIFO_EMPTY_MASK                                                       0x00000020L
#define SDMA_UTCL1_RD_STATUS__RQPG_REQPAGE_FIFO_EMPTY_MASK                                                    0x00000040L
#define SDMA_UTCL1_RD_STATUS__RQPG_XNACK_FIFO_EMPTY_MASK                                                      0x00000080L
#define SDMA_UTCL1_RD_STATUS__RQPG_INVREQ_FIFO_EMPTY_MASK                                                     0x00000100L
#define SDMA_UTCL1_RD_STATUS__RQMC_RET_ADDR_FIFO_FULL_MASK                                                    0x00000200L
#define SDMA_UTCL1_RD_STATUS__RQMC_REQ_FIFO_FULL_MASK                                                         0x00000400L
#define SDMA_UTCL1_RD_STATUS__RTPG_RET_BUF_FULL_MASK                                                          0x00000800L
#define SDMA_UTCL1_RD_STATUS__RTPG_VADDR_FIFO_FULL_MASK                                                       0x00001000L
#define SDMA_UTCL1_RD_STATUS__RQPG_HEAD_VIRT_FIFO_FULL_MASK                                                   0x00002000L
#define SDMA_UTCL1_RD_STATUS__RQPG_REDO_FIFO_FULL_MASK                                                        0x00004000L
#define SDMA_UTCL1_RD_STATUS__RQPG_REQPAGE_FIFO_FULL_MASK                                                     0x00008000L
#define SDMA_UTCL1_RD_STATUS__RQPG_XNACK_FIFO_FULL_MASK                                                       0x00010000L
#define SDMA_UTCL1_RD_STATUS__RQPG_INVREQ_FIFO_FULL_MASK                                                      0x00020000L
#define SDMA_UTCL1_RD_STATUS__PAGE_FAULT_MASK                                                                 0x00040000L
#define SDMA_UTCL1_RD_STATUS__PAGE_NULL_MASK                                                                  0x00080000L
#define SDMA_UTCL1_RD_STATUS__REQL2_IDLE_MASK                                                                 0x00100000L
#define SDMA_UTCL1_RD_STATUS__CE_L1_STALL_MASK                                                                0x00200000L
#define SDMA_UTCL1_RD_STATUS__NEXT_RD_VECTOR_MASK                                                             0x03C00000L
#define SDMA_UTCL1_RD_STATUS__MERGE_STATE_MASK                                                                0x1C000000L
#define SDMA_UTCL1_RD_STATUS__ADDR_RD_RTR_MASK                                                                0x20000000L
#define SDMA_UTCL1_RD_STATUS__WPTR_POLLING_MASK                                                               0x40000000L
#define SDMA_UTCL1_RD_STATUS__INVREQ_SIZE_MASK                                                                0x80000000L
//SDMA_UTCL1_WR_STATUS
#define SDMA_UTCL1_WR_STATUS__RQMC_RET_ADDR_FIFO_EMPTY__SHIFT                                                 0x0
#define SDMA_UTCL1_WR_STATUS__RQMC_REQ_FIFO_EMPTY__SHIFT                                                      0x1
#define SDMA_UTCL1_WR_STATUS__RTPG_RET_BUF_EMPTY__SHIFT                                                       0x2
#define SDMA_UTCL1_WR_STATUS__RTPG_VADDR_FIFO_EMPTY__SHIFT                                                    0x3
#define SDMA_UTCL1_WR_STATUS__RQPG_HEAD_VIRT_FIFO_EMPTY__SHIFT                                                0x4
#define SDMA_UTCL1_WR_STATUS__RQPG_REDO_FIFO_EMPTY__SHIFT                                                     0x5
#define SDMA_UTCL1_WR_STATUS__RQPG_REQPAGE_FIFO_EMPTY__SHIFT                                                  0x6
#define SDMA_UTCL1_WR_STATUS__REDO_ARR_EMPTY__SHIFT                                                           0x7
#define SDMA_UTCL1_WR_STATUS__RESERVED_8__SHIFT                                                               0x8
#define SDMA_UTCL1_WR_STATUS__RQMC_RET_ADDR_FIFO_FULL__SHIFT                                                  0x9
#define SDMA_UTCL1_WR_STATUS__RQMC_REQ_FIFO_FULL__SHIFT                                                       0xa
#define SDMA_UTCL1_WR_STATUS__RTPG_RET_BUF_FULL__SHIFT                                                        0xb
#define SDMA_UTCL1_WR_STATUS__RTPG_VADDR_FIFO_FULL__SHIFT                                                     0xc
#define SDMA_UTCL1_WR_STATUS__RQPG_HEAD_VIRT_FIFO_FULL__SHIFT                                                 0xd
#define SDMA_UTCL1_WR_STATUS__RQPG_REDO_FIFO_FULL__SHIFT                                                      0xe
#define SDMA_UTCL1_WR_STATUS__RQPG_REQPAGE_FIFO_FULL__SHIFT                                                   0xf
#define SDMA_UTCL1_WR_STATUS__REDO_ARR_FULL__SHIFT                                                            0x10
#define SDMA_UTCL1_WR_STATUS__RESERVED_17__SHIFT                                                              0x11
#define SDMA_UTCL1_WR_STATUS__PAGE_FAULT__SHIFT                                                               0x12
#define SDMA_UTCL1_WR_STATUS__PAGE_NULL__SHIFT                                                                0x13
#define SDMA_UTCL1_WR_STATUS__REQL2_IDLE__SHIFT                                                               0x14
#define SDMA_UTCL1_WR_STATUS__F32_WR_RTR__SHIFT                                                               0x15
#define SDMA_UTCL1_WR_STATUS__NEXT_WR_VECTOR__SHIFT                                                           0x16
#define SDMA_UTCL1_WR_STATUS__MERGE_STATE__SHIFT                                                              0x19
#define SDMA_UTCL1_WR_STATUS__RPTR_DATA_FIFO_EMPTY__SHIFT                                                     0x1c
#define SDMA_UTCL1_WR_STATUS__RPTR_DATA_FIFO_FULL__SHIFT                                                      0x1d
#define SDMA_UTCL1_WR_STATUS__WRREQ_DATA_FIFO_EMPTY__SHIFT                                                    0x1e
#define SDMA_UTCL1_WR_STATUS__WRREQ_DATA_FIFO_FULL__SHIFT                                                     0x1f
#define SDMA_UTCL1_WR_STATUS__RQMC_RET_ADDR_FIFO_EMPTY_MASK                                                   0x00000001L
#define SDMA_UTCL1_WR_STATUS__RQMC_REQ_FIFO_EMPTY_MASK                                                        0x00000002L
#define SDMA_UTCL1_WR_STATUS__RTPG_RET_BUF_EMPTY_MASK                                                         0x00000004L
#define SDMA_UTCL1_WR_STATUS__RTPG_VADDR_FIFO_EMPTY_MASK                                                      0x00000008L
#define SDMA_UTCL1_WR_STATUS__RQPG_HEAD_VIRT_FIFO_EMPTY_MASK                                                  0x00000010L
#define SDMA_UTCL1_WR_STATUS__RQPG_REDO_FIFO_EMPTY_MASK                                                       0x00000020L
#define SDMA_UTCL1_WR_STATUS__RQPG_REQPAGE_FIFO_EMPTY_MASK                                                    0x00000040L
#define SDMA_UTCL1_WR_STATUS__REDO_ARR_EMPTY_MASK                                                             0x00000080L
#define SDMA_UTCL1_WR_STATUS__RESERVED_8_MASK                                                                 0x00000100L
#define SDMA_UTCL1_WR_STATUS__RQMC_RET_ADDR_FIFO_FULL_MASK                                                    0x00000200L
#define SDMA_UTCL1_WR_STATUS__RQMC_REQ_FIFO_FULL_MASK                                                         0x00000400L
#define SDMA_UTCL1_WR_STATUS__RTPG_RET_BUF_FULL_MASK                                                          0x00000800L
#define SDMA_UTCL1_WR_STATUS__RTPG_VADDR_FIFO_FULL_MASK                                                       0x00001000L
#define SDMA_UTCL1_WR_STATUS__RQPG_HEAD_VIRT_FIFO_FULL_MASK                                                   0x00002000L
#define SDMA_UTCL1_WR_STATUS__RQPG_REDO_FIFO_FULL_MASK                                                        0x00004000L
#define SDMA_UTCL1_WR_STATUS__RQPG_REQPAGE_FIFO_FULL_MASK                                                     0x00008000L
#define SDMA_UTCL1_WR_STATUS__REDO_ARR_FULL_MASK                                                              0x00010000L
#define SDMA_UTCL1_WR_STATUS__RESERVED_17_MASK                                                                0x00020000L
#define SDMA_UTCL1_WR_STATUS__PAGE_FAULT_MASK                                                                 0x00040000L
#define SDMA_UTCL1_WR_STATUS__PAGE_NULL_MASK                                                                  0x00080000L
#define SDMA_UTCL1_WR_STATUS__REQL2_IDLE_MASK                                                                 0x00100000L
#define SDMA_UTCL1_WR_STATUS__F32_WR_RTR_MASK                                                                 0x00200000L
#define SDMA_UTCL1_WR_STATUS__NEXT_WR_VECTOR_MASK                                                             0x01C00000L
#define SDMA_UTCL1_WR_STATUS__MERGE_STATE_MASK                                                                0x0E000000L
#define SDMA_UTCL1_WR_STATUS__RPTR_DATA_FIFO_EMPTY_MASK                                                       0x10000000L
#define SDMA_UTCL1_WR_STATUS__RPTR_DATA_FIFO_FULL_MASK                                                        0x20000000L
#define SDMA_UTCL1_WR_STATUS__WRREQ_DATA_FIFO_EMPTY_MASK                                                      0x40000000L
#define SDMA_UTCL1_WR_STATUS__WRREQ_DATA_FIFO_FULL_MASK                                                       0x80000000L
//SDMA_UTCL1_INV0
#define SDMA_UTCL1_INV0__INV_MIDDLE__SHIFT                                                                    0x0
#define SDMA_UTCL1_INV0__RD_TIMEOUT__SHIFT                                                                    0x1
#define SDMA_UTCL1_INV0__WR_TIMEOUT__SHIFT                                                                    0x2
#define SDMA_UTCL1_INV0__RD_IN_INVADR__SHIFT                                                                  0x3
#define SDMA_UTCL1_INV0__WR_IN_INVADR__SHIFT                                                                  0x4
#define SDMA_UTCL1_INV0__PAGE_NULL_SW__SHIFT                                                                  0x5
#define SDMA_UTCL1_INV0__XNACK_IS_INVADR__SHIFT                                                               0x6
#define SDMA_UTCL1_INV0__INVREQ_ENABLE__SHIFT                                                                 0x7
#define SDMA_UTCL1_INV0__NACK_TIMEOUT_SW__SHIFT                                                               0x8
#define SDMA_UTCL1_INV0__NFLUSH_INV_IDLE__SHIFT                                                               0x9
#define SDMA_UTCL1_INV0__FLUSH_INV_IDLE__SHIFT                                                                0xa
#define SDMA_UTCL1_INV0__INV_FLUSHTYPE__SHIFT                                                                 0xb
#define SDMA_UTCL1_INV0__INV_VMID_VEC__SHIFT                                                                  0xc
#define SDMA_UTCL1_INV0__INV_ADDR_HI__SHIFT                                                                   0x1c
#define SDMA_UTCL1_INV0__INV_MIDDLE_MASK                                                                      0x00000001L
#define SDMA_UTCL1_INV0__RD_TIMEOUT_MASK                                                                      0x00000002L
#define SDMA_UTCL1_INV0__WR_TIMEOUT_MASK                                                                      0x00000004L
#define SDMA_UTCL1_INV0__RD_IN_INVADR_MASK                                                                    0x00000008L
#define SDMA_UTCL1_INV0__WR_IN_INVADR_MASK                                                                    0x00000010L
#define SDMA_UTCL1_INV0__PAGE_NULL_SW_MASK                                                                    0x00000020L
#define SDMA_UTCL1_INV0__XNACK_IS_INVADR_MASK                                                                 0x00000040L
#define SDMA_UTCL1_INV0__INVREQ_ENABLE_MASK                                                                   0x00000080L
#define SDMA_UTCL1_INV0__NACK_TIMEOUT_SW_MASK                                                                 0x00000100L
#define SDMA_UTCL1_INV0__NFLUSH_INV_IDLE_MASK                                                                 0x00000200L
#define SDMA_UTCL1_INV0__FLUSH_INV_IDLE_MASK                                                                  0x00000400L
#define SDMA_UTCL1_INV0__INV_FLUSHTYPE_MASK                                                                   0x00000800L
#define SDMA_UTCL1_INV0__INV_VMID_VEC_MASK                                                                    0x0FFFF000L
#define SDMA_UTCL1_INV0__INV_ADDR_HI_MASK                                                                     0xF0000000L
//SDMA_UTCL1_INV1
#define SDMA_UTCL1_INV1__INV_ADDR_LO__SHIFT                                                                   0x0
#define SDMA_UTCL1_INV1__INV_ADDR_LO_MASK                                                                     0xFFFFFFFFL
//SDMA_UTCL1_INV2
#define SDMA_UTCL1_INV2__INV_NFLUSH_VMID_VEC__SHIFT                                                           0x0
#define SDMA_UTCL1_INV2__INV_NFLUSH_VMID_VEC_MASK                                                             0xFFFFFFFFL
//SDMA_UTCL1_RD_XNACK0
#define SDMA_UTCL1_RD_XNACK0__XNACK_ADDR_LO__SHIFT                                                            0x0
#define SDMA_UTCL1_RD_XNACK0__XNACK_ADDR_LO_MASK                                                              0xFFFFFFFFL
//SDMA_UTCL1_RD_XNACK1
#define SDMA_UTCL1_RD_XNACK1__XNACK_ADDR_HI__SHIFT                                                            0x0
#define SDMA_UTCL1_RD_XNACK1__XNACK_VMID__SHIFT                                                               0x4
#define SDMA_UTCL1_RD_XNACK1__XNACK_VECTOR__SHIFT                                                             0x8
#define SDMA_UTCL1_RD_XNACK1__IS_XNACK__SHIFT                                                                 0x1a
#define SDMA_UTCL1_RD_XNACK1__XNACK_ADDR_HI_MASK                                                              0x0000000FL
#define SDMA_UTCL1_RD_XNACK1__XNACK_VMID_MASK                                                                 0x000000F0L
#define SDMA_UTCL1_RD_XNACK1__XNACK_VECTOR_MASK                                                               0x03FFFF00L
#define SDMA_UTCL1_RD_XNACK1__IS_XNACK_MASK                                                                   0x0C000000L
//SDMA_UTCL1_WR_XNACK0
#define SDMA_UTCL1_WR_XNACK0__XNACK_ADDR_LO__SHIFT                                                            0x0
#define SDMA_UTCL1_WR_XNACK0__XNACK_ADDR_LO_MASK                                                              0xFFFFFFFFL
//SDMA_UTCL1_WR_XNACK1
#define SDMA_UTCL1_WR_XNACK1__XNACK_ADDR_HI__SHIFT                                                            0x0
#define SDMA_UTCL1_WR_XNACK1__XNACK_VMID__SHIFT                                                               0x4
#define SDMA_UTCL1_WR_XNACK1__XNACK_VECTOR__SHIFT                                                             0x8
#define SDMA_UTCL1_WR_XNACK1__IS_XNACK__SHIFT                                                                 0x1a
#define SDMA_UTCL1_WR_XNACK1__XNACK_ADDR_HI_MASK                                                              0x0000000FL
#define SDMA_UTCL1_WR_XNACK1__XNACK_VMID_MASK                                                                 0x000000F0L
#define SDMA_UTCL1_WR_XNACK1__XNACK_VECTOR_MASK                                                               0x03FFFF00L
#define SDMA_UTCL1_WR_XNACK1__IS_XNACK_MASK                                                                   0x0C000000L
//SDMA_UTCL1_TIMEOUT
#define SDMA_UTCL1_TIMEOUT__RD_XNACK_LIMIT__SHIFT                                                             0x0
#define SDMA_UTCL1_TIMEOUT__WR_XNACK_LIMIT__SHIFT                                                             0x10
#define SDMA_UTCL1_TIMEOUT__RD_XNACK_LIMIT_MASK                                                               0x0000FFFFL
#define SDMA_UTCL1_TIMEOUT__WR_XNACK_LIMIT_MASK                                                               0xFFFF0000L
//SDMA_UTCL1_PAGE
#define SDMA_UTCL1_PAGE__VM_HOLE__SHIFT                                                                       0x0
#define SDMA_UTCL1_PAGE__REQ_TYPE__SHIFT                                                                      0x1
#define SDMA_UTCL1_PAGE__TMZ_ENABLE__SHIFT                                                                    0x5
#define SDMA_UTCL1_PAGE__USE_MTYPE__SHIFT                                                                     0x6
#define SDMA_UTCL1_PAGE__USE_PT_SNOOP__SHIFT                                                                  0x9
#define SDMA_UTCL1_PAGE__LLC_NOALLOC__SHIFT                                                                   0xa
#define SDMA_UTCL1_PAGE__VM_HOLE_MASK                                                                         0x00000001L
#define SDMA_UTCL1_PAGE__REQ_TYPE_MASK                                                                        0x0000001EL
#define SDMA_UTCL1_PAGE__TMZ_ENABLE_MASK                                                                      0x00000020L
#define SDMA_UTCL1_PAGE__USE_MTYPE_MASK                                                                       0x000001C0L
#define SDMA_UTCL1_PAGE__USE_PT_SNOOP_MASK                                                                    0x00000200L
#define SDMA_UTCL1_PAGE__LLC_NOALLOC_MASK                                                                     0x00000400L
//SDMA_POWER_CNTL_IDLE
#define SDMA_POWER_CNTL_IDLE__DELAY0__SHIFT                                                                   0x0
#define SDMA_POWER_CNTL_IDLE__DELAY1__SHIFT                                                                   0x10
#define SDMA_POWER_CNTL_IDLE__DELAY2__SHIFT                                                                   0x18
#define SDMA_POWER_CNTL_IDLE__DELAY0_MASK                                                                     0x0000FFFFL
#define SDMA_POWER_CNTL_IDLE__DELAY1_MASK                                                                     0x00FF0000L
#define SDMA_POWER_CNTL_IDLE__DELAY2_MASK                                                                     0xFF000000L
//SDMA_RELAX_ORDERING_LUT
#define SDMA_RELAX_ORDERING_LUT__RESERVED0__SHIFT                                                             0x0
#define SDMA_RELAX_ORDERING_LUT__COPY__SHIFT                                                                  0x1
#define SDMA_RELAX_ORDERING_LUT__WRITE__SHIFT                                                                 0x2
#define SDMA_RELAX_ORDERING_LUT__RESERVED3__SHIFT                                                             0x3
#define SDMA_RELAX_ORDERING_LUT__RESERVED4__SHIFT                                                             0x4
#define SDMA_RELAX_ORDERING_LUT__FENCE__SHIFT                                                                 0x5
#define SDMA_RELAX_ORDERING_LUT__RESERVED76__SHIFT                                                            0x6
#define SDMA_RELAX_ORDERING_LUT__POLL_MEM__SHIFT                                                              0x8
#define SDMA_RELAX_ORDERING_LUT__COND_EXE__SHIFT                                                              0x9
#define SDMA_RELAX_ORDERING_LUT__ATOMIC__SHIFT                                                                0xa
#define SDMA_RELAX_ORDERING_LUT__CONST_FILL__SHIFT                                                            0xb
#define SDMA_RELAX_ORDERING_LUT__PTEPDE__SHIFT                                                                0xc
#define SDMA_RELAX_ORDERING_LUT__TIMESTAMP__SHIFT                                                             0xd
#define SDMA_RELAX_ORDERING_LUT__RESERVED__SHIFT                                                              0xe
#define SDMA_RELAX_ORDERING_LUT__WORLD_SWITCH__SHIFT                                                          0x1b
#define SDMA_RELAX_ORDERING_LUT__RPTR_WRB__SHIFT                                                              0x1c
#define SDMA_RELAX_ORDERING_LUT__WPTR_POLL__SHIFT                                                             0x1d
#define SDMA_RELAX_ORDERING_LUT__IB_FETCH__SHIFT                                                              0x1e
#define SDMA_RELAX_ORDERING_LUT__RB_FETCH__SHIFT                                                              0x1f
#define SDMA_RELAX_ORDERING_LUT__RESERVED0_MASK                                                               0x00000001L
#define SDMA_RELAX_ORDERING_LUT__COPY_MASK                                                                    0x00000002L
#define SDMA_RELAX_ORDERING_LUT__WRITE_MASK                                                                   0x00000004L
#define SDMA_RELAX_ORDERING_LUT__RESERVED3_MASK                                                               0x00000008L
#define SDMA_RELAX_ORDERING_LUT__RESERVED4_MASK                                                               0x00000010L
#define SDMA_RELAX_ORDERING_LUT__FENCE_MASK                                                                   0x00000020L
#define SDMA_RELAX_ORDERING_LUT__RESERVED76_MASK                                                              0x000000C0L
#define SDMA_RELAX_ORDERING_LUT__POLL_MEM_MASK                                                                0x00000100L
#define SDMA_RELAX_ORDERING_LUT__COND_EXE_MASK                                                                0x00000200L
#define SDMA_RELAX_ORDERING_LUT__ATOMIC_MASK                                                                  0x00000400L
#define SDMA_RELAX_ORDERING_LUT__CONST_FILL_MASK                                                              0x00000800L
#define SDMA_RELAX_ORDERING_LUT__PTEPDE_MASK                                                                  0x00001000L
#define SDMA_RELAX_ORDERING_LUT__TIMESTAMP_MASK                                                               0x00002000L
#define SDMA_RELAX_ORDERING_LUT__RESERVED_MASK                                                                0x07FFC000L
#define SDMA_RELAX_ORDERING_LUT__WORLD_SWITCH_MASK                                                            0x08000000L
#define SDMA_RELAX_ORDERING_LUT__RPTR_WRB_MASK                                                                0x10000000L
#define SDMA_RELAX_ORDERING_LUT__WPTR_POLL_MASK                                                               0x20000000L
#define SDMA_RELAX_ORDERING_LUT__IB_FETCH_MASK                                                                0x40000000L
#define SDMA_RELAX_ORDERING_LUT__RB_FETCH_MASK                                                                0x80000000L
//SDMA_CHICKEN_BITS_2
#define SDMA_CHICKEN_BITS_2__F32_CMD_PROC_DELAY__SHIFT                                                        0x0
#define SDMA_CHICKEN_BITS_2__F32_SEND_POSTCODE_EN__SHIFT                                                      0x4
#define SDMA_CHICKEN_BITS_2__F32_CMD_PROC_DELAY_MASK                                                          0x0000000FL
#define SDMA_CHICKEN_BITS_2__F32_SEND_POSTCODE_EN_MASK                                                        0x00000010L
//SDMA_STATUS3_REG
#define SDMA_STATUS3_REG__CMD_OP_STATUS__SHIFT                                                                0x0
#define SDMA_STATUS3_REG__PREV_VM_CMD__SHIFT                                                                  0x10
#define SDMA_STATUS3_REG__EXCEPTION_IDLE__SHIFT                                                               0x14
#define SDMA_STATUS3_REG__QUEUE_ID_MATCH__SHIFT                                                               0x15
#define SDMA_STATUS3_REG__INT_QUEUE_ID__SHIFT                                                                 0x16
#define SDMA_STATUS3_REG__CMD_OP_STATUS_MASK                                                                  0x0000FFFFL
#define SDMA_STATUS3_REG__PREV_VM_CMD_MASK                                                                    0x000F0000L
#define SDMA_STATUS3_REG__EXCEPTION_IDLE_MASK                                                                 0x00100000L
#define SDMA_STATUS3_REG__QUEUE_ID_MATCH_MASK                                                                 0x00200000L
#define SDMA_STATUS3_REG__INT_QUEUE_ID_MASK                                                                   0x03C00000L
//SDMA_PHYSICAL_ADDR_LO
#define SDMA_PHYSICAL_ADDR_LO__D_VALID__SHIFT                                                                 0x0
#define SDMA_PHYSICAL_ADDR_LO__DIRTY__SHIFT                                                                   0x1
#define SDMA_PHYSICAL_ADDR_LO__PHY_VALID__SHIFT                                                               0x2
#define SDMA_PHYSICAL_ADDR_LO__ADDR__SHIFT                                                                    0xc
#define SDMA_PHYSICAL_ADDR_LO__D_VALID_MASK                                                                   0x00000001L
#define SDMA_PHYSICAL_ADDR_LO__DIRTY_MASK                                                                     0x00000002L
#define SDMA_PHYSICAL_ADDR_LO__PHY_VALID_MASK                                                                 0x00000004L
#define SDMA_PHYSICAL_ADDR_LO__ADDR_MASK                                                                      0xFFFFF000L
//SDMA_PHYSICAL_ADDR_HI
#define SDMA_PHYSICAL_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_PHYSICAL_ADDR_HI__ADDR_MASK                                                                      0x0000FFFFL
//SDMA_PHASE2_QUANTUM
#define SDMA_PHASE2_QUANTUM__UNIT__SHIFT                                                                      0x0
#define SDMA_PHASE2_QUANTUM__VALUE__SHIFT                                                                     0x8
#define SDMA_PHASE2_QUANTUM__PREFER__SHIFT                                                                    0x1e
#define SDMA_PHASE2_QUANTUM__UNIT_MASK                                                                        0x0000000FL
#define SDMA_PHASE2_QUANTUM__VALUE_MASK                                                                       0x00FFFF00L
#define SDMA_PHASE2_QUANTUM__PREFER_MASK                                                                      0x40000000L
//SDMA_ERROR_LOG
#define SDMA_ERROR_LOG__OVERRIDE__SHIFT                                                                       0x0
#define SDMA_ERROR_LOG__STATUS__SHIFT                                                                         0x10
#define SDMA_ERROR_LOG__OVERRIDE_MASK                                                                         0x0000FFFFL
#define SDMA_ERROR_LOG__STATUS_MASK                                                                           0xFFFF0000L
//SDMA_PUB_DUMMY_REG0
#define SDMA_PUB_DUMMY_REG0__VALUE__SHIFT                                                                     0x0
#define SDMA_PUB_DUMMY_REG0__VALUE_MASK                                                                       0xFFFFFFFFL
//SDMA_PUB_DUMMY_REG1
#define SDMA_PUB_DUMMY_REG1__VALUE__SHIFT                                                                     0x0
#define SDMA_PUB_DUMMY_REG1__VALUE_MASK                                                                       0xFFFFFFFFL
//SDMA_PUB_DUMMY_REG2
#define SDMA_PUB_DUMMY_REG2__VALUE__SHIFT                                                                     0x0
#define SDMA_PUB_DUMMY_REG2__VALUE_MASK                                                                       0xFFFFFFFFL
//SDMA_PUB_DUMMY_REG3
#define SDMA_PUB_DUMMY_REG3__VALUE__SHIFT                                                                     0x0
#define SDMA_PUB_DUMMY_REG3__VALUE_MASK                                                                       0xFFFFFFFFL
//SDMA_F32_COUNTER
#define SDMA_F32_COUNTER__VALUE__SHIFT                                                                        0x0
#define SDMA_F32_COUNTER__VALUE_MASK                                                                          0xFFFFFFFFL
//SDMA_PERFCNT_PERFCOUNTER0_CFG
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__PERF_SEL__SHIFT                                                        0x0
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__PERF_SEL_END__SHIFT                                                    0x8
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__PERF_MODE__SHIFT                                                       0x18
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__ENABLE__SHIFT                                                          0x1c
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__CLEAR__SHIFT                                                           0x1d
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__PERF_SEL_MASK                                                          0x000000FFL
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__PERF_SEL_END_MASK                                                      0x0000FF00L
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__PERF_MODE_MASK                                                         0x0F000000L
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__ENABLE_MASK                                                            0x10000000L
#define SDMA_PERFCNT_PERFCOUNTER0_CFG__CLEAR_MASK                                                             0x20000000L
//SDMA_PERFCNT_PERFCOUNTER1_CFG
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__PERF_SEL__SHIFT                                                        0x0
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__PERF_SEL_END__SHIFT                                                    0x8
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__PERF_MODE__SHIFT                                                       0x18
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__ENABLE__SHIFT                                                          0x1c
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__CLEAR__SHIFT                                                           0x1d
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__PERF_SEL_MASK                                                          0x000000FFL
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__PERF_SEL_END_MASK                                                      0x0000FF00L
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__PERF_MODE_MASK                                                         0x0F000000L
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__ENABLE_MASK                                                            0x10000000L
#define SDMA_PERFCNT_PERFCOUNTER1_CFG__CLEAR_MASK                                                             0x20000000L
//SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__PERF_COUNTER_SELECT__SHIFT                                        0x0
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__START_TRIGGER__SHIFT                                              0x8
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__STOP_TRIGGER__SHIFT                                               0x10
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__ENABLE_ANY__SHIFT                                                 0x18
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__CLEAR_ALL__SHIFT                                                  0x19
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__STOP_ALL_ON_SATURATE__SHIFT                                       0x1a
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__PERF_COUNTER_SELECT_MASK                                          0x0000000FL
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__START_TRIGGER_MASK                                                0x0000FF00L
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__STOP_TRIGGER_MASK                                                 0x00FF0000L
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__ENABLE_ANY_MASK                                                   0x01000000L
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__CLEAR_ALL_MASK                                                    0x02000000L
#define SDMA_PERFCNT_PERFCOUNTER_RSLT_CNTL__STOP_ALL_ON_SATURATE_MASK                                         0x04000000L
//SDMA_PERFCNT_MISC_CNTL
#define SDMA_PERFCNT_MISC_CNTL__CMD_OP__SHIFT                                                                 0x0
#define SDMA_PERFCNT_MISC_CNTL__MMHUB_REQ_EVENT_SELECT__SHIFT                                                 0x10
#define SDMA_PERFCNT_MISC_CNTL__CMD_OP_MASK                                                                   0x0000FFFFL
#define SDMA_PERFCNT_MISC_CNTL__MMHUB_REQ_EVENT_SELECT_MASK                                                   0x00010000L
//SDMA_PERFCNT_PERFCOUNTER_LO
#define SDMA_PERFCNT_PERFCOUNTER_LO__COUNTER_LO__SHIFT                                                        0x0
#define SDMA_PERFCNT_PERFCOUNTER_LO__COUNTER_LO_MASK                                                          0xFFFFFFFFL
//SDMA_PERFCNT_PERFCOUNTER_HI
#define SDMA_PERFCNT_PERFCOUNTER_HI__COUNTER_HI__SHIFT                                                        0x0
#define SDMA_PERFCNT_PERFCOUNTER_HI__COMPARE_VALUE__SHIFT                                                     0x10
#define SDMA_PERFCNT_PERFCOUNTER_HI__COUNTER_HI_MASK                                                          0x0000FFFFL
#define SDMA_PERFCNT_PERFCOUNTER_HI__COMPARE_VALUE_MASK                                                       0xFFFF0000L
//SDMA_CRD_CNTL
#define SDMA_CRD_CNTL__DRM_CREDIT__SHIFT                                                                      0x0
#define SDMA_CRD_CNTL__MC_WRREQ_CREDIT__SHIFT                                                                 0x7
#define SDMA_CRD_CNTL__MC_RDREQ_CREDIT__SHIFT                                                                 0xd
#define SDMA_CRD_CNTL__DRM_CREDIT_MASK                                                                        0x0000007FL
#define SDMA_CRD_CNTL__MC_WRREQ_CREDIT_MASK                                                                   0x00001F80L
#define SDMA_CRD_CNTL__MC_RDREQ_CREDIT_MASK                                                                   0x0007E000L
//SDMA_GPU_IOV_VIOLATION_LOG
#define SDMA_GPU_IOV_VIOLATION_LOG__VIOLATION_STATUS__SHIFT                                                   0x0
#define SDMA_GPU_IOV_VIOLATION_LOG__MULTIPLE_VIOLATION_STATUS__SHIFT                                          0x1
#define SDMA_GPU_IOV_VIOLATION_LOG__ADDRESS__SHIFT                                                            0x2
#define SDMA_GPU_IOV_VIOLATION_LOG__WRITE_OPERATION__SHIFT                                                    0x14
#define SDMA_GPU_IOV_VIOLATION_LOG__VF__SHIFT                                                                 0x15
#define SDMA_GPU_IOV_VIOLATION_LOG__VFID__SHIFT                                                               0x16
#define SDMA_GPU_IOV_VIOLATION_LOG__VIOLATION_STATUS_MASK                                                     0x00000001L
#define SDMA_GPU_IOV_VIOLATION_LOG__MULTIPLE_VIOLATION_STATUS_MASK                                            0x00000002L
#define SDMA_GPU_IOV_VIOLATION_LOG__ADDRESS_MASK                                                              0x000FFFFCL
#define SDMA_GPU_IOV_VIOLATION_LOG__WRITE_OPERATION_MASK                                                      0x00100000L
#define SDMA_GPU_IOV_VIOLATION_LOG__VF_MASK                                                                   0x00200000L
#define SDMA_GPU_IOV_VIOLATION_LOG__VFID_MASK                                                                 0x03C00000L
//SDMA_ULV_CNTL
#define SDMA_ULV_CNTL__HYSTERESIS__SHIFT                                                                      0x0
#define SDMA_ULV_CNTL__ENTER_ULV_INT_CLR__SHIFT                                                               0x1b
#define SDMA_ULV_CNTL__EXIT_ULV_INT_CLR__SHIFT                                                                0x1c
#define SDMA_ULV_CNTL__ENTER_ULV_INT__SHIFT                                                                   0x1d
#define SDMA_ULV_CNTL__EXIT_ULV_INT__SHIFT                                                                    0x1e
#define SDMA_ULV_CNTL__ULV_STATUS__SHIFT                                                                      0x1f
#define SDMA_ULV_CNTL__HYSTERESIS_MASK                                                                        0x0000001FL
#define SDMA_ULV_CNTL__ENTER_ULV_INT_CLR_MASK                                                                 0x08000000L
#define SDMA_ULV_CNTL__EXIT_ULV_INT_CLR_MASK                                                                  0x10000000L
#define SDMA_ULV_CNTL__ENTER_ULV_INT_MASK                                                                     0x20000000L
#define SDMA_ULV_CNTL__EXIT_ULV_INT_MASK                                                                      0x40000000L
#define SDMA_ULV_CNTL__ULV_STATUS_MASK                                                                        0x80000000L
//SDMA_EA_DBIT_ADDR_DATA
#define SDMA_EA_DBIT_ADDR_DATA__VALUE__SHIFT                                                                  0x0
#define SDMA_EA_DBIT_ADDR_DATA__VALUE_MASK                                                                    0xFFFFFFFFL
//SDMA_EA_DBIT_ADDR_INDEX
#define SDMA_EA_DBIT_ADDR_INDEX__VALUE__SHIFT                                                                 0x0
#define SDMA_EA_DBIT_ADDR_INDEX__VALUE_MASK                                                                   0x00000007L
//SDMA_GPU_IOV_VIOLATION_LOG2
#define SDMA_GPU_IOV_VIOLATION_LOG2__INITIATOR_ID__SHIFT                                                      0x0
#define SDMA_GPU_IOV_VIOLATION_LOG2__INITIATOR_ID_MASK                                                        0x000003FFL
//SDMA_STATUS4_REG
#define SDMA_STATUS4_REG__IDLE__SHIFT                                                                         0x0
#define SDMA_STATUS4_REG__IH_OUTSTANDING__SHIFT                                                               0x2
#define SDMA_STATUS4_REG__SEM_OUTSTANDING__SHIFT                                                              0x3
#define SDMA_STATUS4_REG__MMHUB_RD_OUTSTANDING__SHIFT                                                         0x4
#define SDMA_STATUS4_REG__MMHUB_WR_OUTSTANDING__SHIFT                                                         0x5
#define SDMA_STATUS4_REG__UTCL2_RD_OUTSTANDING__SHIFT                                                         0x6
#define SDMA_STATUS4_REG__UTCL2_WR_OUTSTANDING__SHIFT                                                         0x7
#define SDMA_STATUS4_REG__REG_POLLING__SHIFT                                                                  0x8
#define SDMA_STATUS4_REG__MEM_POLLING__SHIFT                                                                  0x9
#define SDMA_STATUS4_REG__UTCL2_RD_XNACK__SHIFT                                                               0xa
#define SDMA_STATUS4_REG__UTCL2_WR_XNACK__SHIFT                                                               0xc
#define SDMA_STATUS4_REG__ACTIVE_QUEUE_ID__SHIFT                                                              0xe
#define SDMA_STATUS4_REG__SRIOV_WATING_RLCV_CMD__SHIFT                                                        0x12
#define SDMA_STATUS4_REG__SRIOV_SDMA_EXECUTING_CMD__SHIFT                                                     0x13
#define SDMA_STATUS4_REG__VM_HOLE_STATUS__SHIFT                                                               0x14
#define SDMA_STATUS4_REG__IDLE_MASK                                                                           0x00000001L
#define SDMA_STATUS4_REG__IH_OUTSTANDING_MASK                                                                 0x00000004L
#define SDMA_STATUS4_REG__SEM_OUTSTANDING_MASK                                                                0x00000008L
#define SDMA_STATUS4_REG__MMHUB_RD_OUTSTANDING_MASK                                                           0x00000010L
#define SDMA_STATUS4_REG__MMHUB_WR_OUTSTANDING_MASK                                                           0x00000020L
#define SDMA_STATUS4_REG__UTCL2_RD_OUTSTANDING_MASK                                                           0x00000040L
#define SDMA_STATUS4_REG__UTCL2_WR_OUTSTANDING_MASK                                                           0x00000080L
#define SDMA_STATUS4_REG__REG_POLLING_MASK                                                                    0x00000100L
#define SDMA_STATUS4_REG__MEM_POLLING_MASK                                                                    0x00000200L
#define SDMA_STATUS4_REG__UTCL2_RD_XNACK_MASK                                                                 0x00000C00L
#define SDMA_STATUS4_REG__UTCL2_WR_XNACK_MASK                                                                 0x00003000L
#define SDMA_STATUS4_REG__ACTIVE_QUEUE_ID_MASK                                                                0x0003C000L
#define SDMA_STATUS4_REG__SRIOV_WATING_RLCV_CMD_MASK                                                          0x00040000L
#define SDMA_STATUS4_REG__SRIOV_SDMA_EXECUTING_CMD_MASK                                                       0x00080000L
#define SDMA_STATUS4_REG__VM_HOLE_STATUS_MASK                                                                 0x00100000L
//SDMA_SCRATCH_RAM_DATA
#define SDMA_SCRATCH_RAM_DATA__DATA__SHIFT                                                                    0x0
#define SDMA_SCRATCH_RAM_DATA__DATA_MASK                                                                      0xFFFFFFFFL
//SDMA_SCRATCH_RAM_ADDR
#define SDMA_SCRATCH_RAM_ADDR__ADDR__SHIFT                                                                    0x0
#define SDMA_SCRATCH_RAM_ADDR__ADDR_MASK                                                                      0x0000007FL
//SDMA_CE_CTRL
#define SDMA_CE_CTRL__RD_LUT_WATERMARK__SHIFT                                                                 0x0
#define SDMA_CE_CTRL__RD_LUT_DEPTH__SHIFT                                                                     0x3
#define SDMA_CE_CTRL__WR_AFIFO_WATERMARK__SHIFT                                                               0x5
#define SDMA_CE_CTRL__RESERVED__SHIFT                                                                         0x8
#define SDMA_CE_CTRL__RD_LUT_WATERMARK_MASK                                                                   0x00000007L
#define SDMA_CE_CTRL__RD_LUT_DEPTH_MASK                                                                       0x00000018L
#define SDMA_CE_CTRL__WR_AFIFO_WATERMARK_MASK                                                                 0x000000E0L
#define SDMA_CE_CTRL__RESERVED_MASK                                                                           0xFFFFFF00L
//SDMA_RAS_STATUS
#define SDMA_RAS_STATUS__RB_FETCH_ECC__SHIFT                                                                  0x0
#define SDMA_RAS_STATUS__IB_FETCH_ECC__SHIFT                                                                  0x1
#define SDMA_RAS_STATUS__F32_DATA_ECC__SHIFT                                                                  0x2
#define SDMA_RAS_STATUS__WPTR_ATOMIC_ECC__SHIFT                                                               0x3
#define SDMA_RAS_STATUS__COPY_DATA_ECC__SHIFT                                                                 0x4
#define SDMA_RAS_STATUS__SRAM_ECC__SHIFT                                                                      0x5
#define SDMA_RAS_STATUS__RB_FETCH_NACK_GEN_ERR__SHIFT                                                         0x8
#define SDMA_RAS_STATUS__IB_FETCH_NACK_GEN_ERR__SHIFT                                                         0x9
#define SDMA_RAS_STATUS__F32_DATA_NACK_GEN_ERR__SHIFT                                                         0xa
#define SDMA_RAS_STATUS__COPY_DATA_NACK_GEN_ERR__SHIFT                                                        0xb
#define SDMA_RAS_STATUS__WRRET_DATA_NACK_GEN_ERR__SHIFT                                                       0xc
#define SDMA_RAS_STATUS__WPTR_RPTR_ATOMIC_NACK_GEN_ERR__SHIFT                                                 0xd
#define SDMA_RAS_STATUS__ECC_PWRMGT_INT_BUSY__SHIFT                                                           0xe
#define SDMA_RAS_STATUS__RB_FETCH_ECC_MASK                                                                    0x00000001L
#define SDMA_RAS_STATUS__IB_FETCH_ECC_MASK                                                                    0x00000002L
#define SDMA_RAS_STATUS__F32_DATA_ECC_MASK                                                                    0x00000004L
#define SDMA_RAS_STATUS__WPTR_ATOMIC_ECC_MASK                                                                 0x00000008L
#define SDMA_RAS_STATUS__COPY_DATA_ECC_MASK                                                                   0x00000010L
#define SDMA_RAS_STATUS__SRAM_ECC_MASK                                                                        0x00000020L
#define SDMA_RAS_STATUS__RB_FETCH_NACK_GEN_ERR_MASK                                                           0x00000100L
#define SDMA_RAS_STATUS__IB_FETCH_NACK_GEN_ERR_MASK                                                           0x00000200L
#define SDMA_RAS_STATUS__F32_DATA_NACK_GEN_ERR_MASK                                                           0x00000400L
#define SDMA_RAS_STATUS__COPY_DATA_NACK_GEN_ERR_MASK                                                          0x00000800L
#define SDMA_RAS_STATUS__WRRET_DATA_NACK_GEN_ERR_MASK                                                         0x00001000L
#define SDMA_RAS_STATUS__WPTR_RPTR_ATOMIC_NACK_GEN_ERR_MASK                                                   0x00002000L
#define SDMA_RAS_STATUS__ECC_PWRMGT_INT_BUSY_MASK                                                             0x00004000L
//SDMA_CLK_STATUS
#define SDMA_CLK_STATUS__DYN_CLK__SHIFT                                                                       0x0
#define SDMA_CLK_STATUS__PTR_CLK__SHIFT                                                                       0x1
#define SDMA_CLK_STATUS__REG_CLK__SHIFT                                                                       0x2
#define SDMA_CLK_STATUS__F32_CLK__SHIFT                                                                       0x3
#define SDMA_CLK_STATUS__CE_CLK__SHIFT                                                                        0x4
#define SDMA_CLK_STATUS__PERF_CLK__SHIFT                                                                      0x5
#define SDMA_CLK_STATUS__DYN_CLK_MASK                                                                         0x00000001L
#define SDMA_CLK_STATUS__PTR_CLK_MASK                                                                         0x00000002L
#define SDMA_CLK_STATUS__REG_CLK_MASK                                                                         0x00000004L
#define SDMA_CLK_STATUS__F32_CLK_MASK                                                                         0x00000008L
#define SDMA_CLK_STATUS__CE_CLK_MASK                                                                          0x00000010L
#define SDMA_CLK_STATUS__PERF_CLK_MASK                                                                        0x00000020L
//SDMA_POWER_CNTL
#define SDMA_POWER_CNTL__PG_CNTL_ENABLE__SHIFT                                                                0x0
#define SDMA_POWER_CNTL__EXT_PG_POWER_ON_REQ__SHIFT                                                           0x1
#define SDMA_POWER_CNTL__EXT_PG_POWER_OFF_REQ__SHIFT                                                          0x2
#define SDMA_POWER_CNTL__ON_OFF_CONDITION_HOLD_TIME__SHIFT                                                    0x3
#define SDMA_POWER_CNTL__MEM_POWER_OVERRIDE__SHIFT                                                            0x8
#define SDMA_POWER_CNTL__MEM_POWER_LS_EN__SHIFT                                                               0x9
#define SDMA_POWER_CNTL__MEM_POWER_DS_EN__SHIFT                                                               0xa
#define SDMA_POWER_CNTL__MEM_POWER_SD_EN__SHIFT                                                               0xb
#define SDMA_POWER_CNTL__MEM_POWER_DELAY__SHIFT                                                               0xc
#define SDMA_POWER_CNTL__ON_OFF_STATUS_DURATION_TIME__SHIFT                                                   0x1a
#define SDMA_POWER_CNTL__PG_CNTL_ENABLE_MASK                                                                  0x00000001L
#define SDMA_POWER_CNTL__EXT_PG_POWER_ON_REQ_MASK                                                             0x00000002L
#define SDMA_POWER_CNTL__EXT_PG_POWER_OFF_REQ_MASK                                                            0x00000004L
#define SDMA_POWER_CNTL__ON_OFF_CONDITION_HOLD_TIME_MASK                                                      0x000000F8L
#define SDMA_POWER_CNTL__MEM_POWER_OVERRIDE_MASK                                                              0x00000100L
#define SDMA_POWER_CNTL__MEM_POWER_LS_EN_MASK                                                                 0x00000200L
#define SDMA_POWER_CNTL__MEM_POWER_DS_EN_MASK                                                                 0x00000400L
#define SDMA_POWER_CNTL__MEM_POWER_SD_EN_MASK                                                                 0x00000800L
#define SDMA_POWER_CNTL__MEM_POWER_DELAY_MASK                                                                 0x003FF000L
#define SDMA_POWER_CNTL__ON_OFF_STATUS_DURATION_TIME_MASK                                                     0xFC000000L
//SDMA_CLK_CTRL
#define SDMA_CLK_CTRL__ON_DELAY__SHIFT                                                                        0x0
#define SDMA_CLK_CTRL__OFF_HYSTERESIS__SHIFT                                                                  0x4
#define SDMA_CLK_CTRL__RESERVED__SHIFT                                                                        0xc
#define SDMA_CLK_CTRL__SOFT_OVERRIDE7__SHIFT                                                                  0x18
#define SDMA_CLK_CTRL__SOFT_OVERRIDE6__SHIFT                                                                  0x19
#define SDMA_CLK_CTRL__SOFT_OVERRIDE5__SHIFT                                                                  0x1a
#define SDMA_CLK_CTRL__SOFT_OVERRIDE4__SHIFT                                                                  0x1b
#define SDMA_CLK_CTRL__SOFT_OVERRIDE3__SHIFT                                                                  0x1c
#define SDMA_CLK_CTRL__SOFT_OVERRIDE2__SHIFT                                                                  0x1d
#define SDMA_CLK_CTRL__SOFT_OVERRIDE1__SHIFT                                                                  0x1e
#define SDMA_CLK_CTRL__SOFT_OVERRIDE0__SHIFT                                                                  0x1f
#define SDMA_CLK_CTRL__ON_DELAY_MASK                                                                          0x0000000FL
#define SDMA_CLK_CTRL__OFF_HYSTERESIS_MASK                                                                    0x00000FF0L
#define SDMA_CLK_CTRL__RESERVED_MASK                                                                          0x00FFF000L
#define SDMA_CLK_CTRL__SOFT_OVERRIDE7_MASK                                                                    0x01000000L
#define SDMA_CLK_CTRL__SOFT_OVERRIDE6_MASK                                                                    0x02000000L
#define SDMA_CLK_CTRL__SOFT_OVERRIDE5_MASK                                                                    0x04000000L
#define SDMA_CLK_CTRL__SOFT_OVERRIDE4_MASK                                                                    0x08000000L
#define SDMA_CLK_CTRL__SOFT_OVERRIDE3_MASK                                                                    0x10000000L
#define SDMA_CLK_CTRL__SOFT_OVERRIDE2_MASK                                                                    0x20000000L
#define SDMA_CLK_CTRL__SOFT_OVERRIDE1_MASK                                                                    0x40000000L
#define SDMA_CLK_CTRL__SOFT_OVERRIDE0_MASK                                                                    0x80000000L
//SDMA_CNTL
#define SDMA_CNTL__TRAP_ENABLE__SHIFT                                                                         0x0
#define SDMA_CNTL__UTC_L1_ENABLE__SHIFT                                                                       0x1
#define SDMA_CNTL__SEM_WAIT_INT_ENABLE__SHIFT                                                                 0x2
#define SDMA_CNTL__DATA_SWAP_ENABLE__SHIFT                                                                    0x3
#define SDMA_CNTL__FENCE_SWAP_ENABLE__SHIFT                                                                   0x4
#define SDMA_CNTL__MIDCMD_PREEMPT_ENABLE__SHIFT                                                               0x5
#define SDMA_CNTL__MIDCMD_EXPIRE_ENABLE__SHIFT                                                                0x6
#define SDMA_CNTL__REG_WRITE_PROTECT_INT_ENABLE__SHIFT                                                        0x7
#define SDMA_CNTL__INVALID_DOORBELL_INT_ENABLE__SHIFT                                                         0x8
#define SDMA_CNTL__VM_HOLE_INT_ENABLE__SHIFT                                                                  0x9
#define SDMA_CNTL__DRAM_ECC_INT_ENABLE__SHIFT                                                                 0xa
#define SDMA_CNTL__PAGE_RETRY_TIMEOUT_INT_ENABLE__SHIFT                                                       0xb
#define SDMA_CNTL__PAGE_NULL_INT_ENABLE__SHIFT                                                                0xc
#define SDMA_CNTL__PAGE_FAULT_INT_ENABLE__SHIFT                                                               0xd
#define SDMA_CNTL__NACK_GEN_ERR_INT_ENABLE__SHIFT                                                             0xe
#define SDMA_CNTL__MIDCMD_WORLDSWITCH_ENABLE__SHIFT                                                           0x11
#define SDMA_CNTL__AUTO_CTXSW_ENABLE__SHIFT                                                                   0x12
#define SDMA_CNTL__DRM_RESTORE_ENABLE__SHIFT                                                                  0x13
#define SDMA_CNTL__CTXEMPTY_INT_ENABLE__SHIFT                                                                 0x1c
#define SDMA_CNTL__FROZEN_INT_ENABLE__SHIFT                                                                   0x1d
#define SDMA_CNTL__IB_PREEMPT_INT_ENABLE__SHIFT                                                               0x1e
#define SDMA_CNTL__RB_PREEMPT_INT_ENABLE__SHIFT                                                               0x1f
#define SDMA_CNTL__TRAP_ENABLE_MASK                                                                           0x00000001L
#define SDMA_CNTL__UTC_L1_ENABLE_MASK                                                                         0x00000002L
#define SDMA_CNTL__SEM_WAIT_INT_ENABLE_MASK                                                                   0x00000004L
#define SDMA_CNTL__DATA_SWAP_ENABLE_MASK                                                                      0x00000008L
#define SDMA_CNTL__FENCE_SWAP_ENABLE_MASK                                                                     0x00000010L
#define SDMA_CNTL__MIDCMD_PREEMPT_ENABLE_MASK                                                                 0x00000020L
#define SDMA_CNTL__MIDCMD_EXPIRE_ENABLE_MASK                                                                  0x00000040L
#define SDMA_CNTL__REG_WRITE_PROTECT_INT_ENABLE_MASK                                                          0x00000080L
#define SDMA_CNTL__INVALID_DOORBELL_INT_ENABLE_MASK                                                           0x00000100L
#define SDMA_CNTL__VM_HOLE_INT_ENABLE_MASK                                                                    0x00000200L
#define SDMA_CNTL__DRAM_ECC_INT_ENABLE_MASK                                                                   0x00000400L
#define SDMA_CNTL__PAGE_RETRY_TIMEOUT_INT_ENABLE_MASK                                                         0x00000800L
#define SDMA_CNTL__PAGE_NULL_INT_ENABLE_MASK                                                                  0x00001000L
#define SDMA_CNTL__PAGE_FAULT_INT_ENABLE_MASK                                                                 0x00002000L
#define SDMA_CNTL__NACK_GEN_ERR_INT_ENABLE_MASK                                                               0x00004000L
#define SDMA_CNTL__MIDCMD_WORLDSWITCH_ENABLE_MASK                                                             0x00020000L
#define SDMA_CNTL__AUTO_CTXSW_ENABLE_MASK                                                                     0x00040000L
#define SDMA_CNTL__DRM_RESTORE_ENABLE_MASK                                                                    0x00080000L
#define SDMA_CNTL__CTXEMPTY_INT_ENABLE_MASK                                                                   0x10000000L
#define SDMA_CNTL__FROZEN_INT_ENABLE_MASK                                                                     0x20000000L
#define SDMA_CNTL__IB_PREEMPT_INT_ENABLE_MASK                                                                 0x40000000L
#define SDMA_CNTL__RB_PREEMPT_INT_ENABLE_MASK                                                                 0x80000000L
//SDMA_CHICKEN_BITS
#define SDMA_CHICKEN_BITS__COPY_EFFICIENCY_ENABLE__SHIFT                                                      0x0
#define SDMA_CHICKEN_BITS__STALL_ON_TRANS_FULL_ENABLE__SHIFT                                                  0x1
#define SDMA_CHICKEN_BITS__STALL_ON_NO_FREE_DATA_BUFFER_ENABLE__SHIFT                                         0x2
#define SDMA_CHICKEN_BITS__F32_MGCG_ENABLE__SHIFT                                                             0x3
#define SDMA_CHICKEN_BITS__WRITE_BURST_LENGTH__SHIFT                                                          0x8
#define SDMA_CHICKEN_BITS__WRITE_BURST_WAIT_CYCLE__SHIFT                                                      0xa
#define SDMA_CHICKEN_BITS__COPY_OVERLAP_ENABLE__SHIFT                                                         0x10
#define SDMA_CHICKEN_BITS__RAW_CHECK_ENABLE__SHIFT                                                            0x11
#define SDMA_CHICKEN_BITS__SRBM_POLL_RETRYING__SHIFT                                                          0x14
#define SDMA_CHICKEN_BITS__CG_STATUS_OUTPUT__SHIFT                                                            0x17
#define SDMA_CHICKEN_BITS__SRAM_FGCG_ENABLE__SHIFT                                                            0x1a
#define SDMA_CHICKEN_BITS__RESERVED__SHIFT                                                                    0x1b
#define SDMA_CHICKEN_BITS__COPY_EFFICIENCY_ENABLE_MASK                                                        0x00000001L
#define SDMA_CHICKEN_BITS__STALL_ON_TRANS_FULL_ENABLE_MASK                                                    0x00000002L
#define SDMA_CHICKEN_BITS__STALL_ON_NO_FREE_DATA_BUFFER_ENABLE_MASK                                           0x00000004L
#define SDMA_CHICKEN_BITS__F32_MGCG_ENABLE_MASK                                                               0x00000008L
#define SDMA_CHICKEN_BITS__WRITE_BURST_LENGTH_MASK                                                            0x00000300L
#define SDMA_CHICKEN_BITS__WRITE_BURST_WAIT_CYCLE_MASK                                                        0x00001C00L
#define SDMA_CHICKEN_BITS__COPY_OVERLAP_ENABLE_MASK                                                           0x00010000L
#define SDMA_CHICKEN_BITS__RAW_CHECK_ENABLE_MASK                                                              0x00020000L
#define SDMA_CHICKEN_BITS__SRBM_POLL_RETRYING_MASK                                                            0x00100000L
#define SDMA_CHICKEN_BITS__CG_STATUS_OUTPUT_MASK                                                              0x00800000L
#define SDMA_CHICKEN_BITS__SRAM_FGCG_ENABLE_MASK                                                              0x04000000L
#define SDMA_CHICKEN_BITS__RESERVED_MASK                                                                      0xF8000000L
//SDMA_GB_ADDR_CONFIG
#define SDMA_GB_ADDR_CONFIG__NUM_PIPES__SHIFT                                                                 0x0
#define SDMA_GB_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE__SHIFT                                                      0x3
#define SDMA_GB_ADDR_CONFIG__BANK_INTERLEAVE_SIZE__SHIFT                                                      0x8
#define SDMA_GB_ADDR_CONFIG__NUM_BANKS__SHIFT                                                                 0xc
#define SDMA_GB_ADDR_CONFIG__NUM_SHADER_ENGINES__SHIFT                                                        0x13
#define SDMA_GB_ADDR_CONFIG__NUM_PIPES_MASK                                                                   0x00000007L
#define SDMA_GB_ADDR_CONFIG__PIPE_INTERLEAVE_SIZE_MASK                                                        0x00000038L
#define SDMA_GB_ADDR_CONFIG__BANK_INTERLEAVE_SIZE_MASK                                                        0x00000700L
#define SDMA_GB_ADDR_CONFIG__NUM_BANKS_MASK                                                                   0x00007000L
#define SDMA_GB_ADDR_CONFIG__NUM_SHADER_ENGINES_MASK                                                          0x00180000L
//SDMA_GB_ADDR_CONFIG_READ
#define SDMA_GB_ADDR_CONFIG_READ__NUM_PIPES__SHIFT                                                            0x0
#define SDMA_GB_ADDR_CONFIG_READ__PIPE_INTERLEAVE_SIZE__SHIFT                                                 0x3
#define SDMA_GB_ADDR_CONFIG_READ__BANK_INTERLEAVE_SIZE__SHIFT                                                 0x8
#define SDMA_GB_ADDR_CONFIG_READ__NUM_BANKS__SHIFT                                                            0xc
#define SDMA_GB_ADDR_CONFIG_READ__NUM_SHADER_ENGINES__SHIFT                                                   0x13
#define SDMA_GB_ADDR_CONFIG_READ__NUM_PIPES_MASK                                                              0x00000007L
#define SDMA_GB_ADDR_CONFIG_READ__PIPE_INTERLEAVE_SIZE_MASK                                                   0x00000038L
#define SDMA_GB_ADDR_CONFIG_READ__BANK_INTERLEAVE_SIZE_MASK                                                   0x00000700L
#define SDMA_GB_ADDR_CONFIG_READ__NUM_BANKS_MASK                                                              0x00007000L
#define SDMA_GB_ADDR_CONFIG_READ__NUM_SHADER_ENGINES_MASK                                                     0x00180000L
//SDMA_GFX_RB_CNTL
#define SDMA_GFX_RB_CNTL__RB_ENABLE__SHIFT                                                                    0x0
#define SDMA_GFX_RB_CNTL__RB_SIZE__SHIFT                                                                      0x1
#define SDMA_GFX_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                               0x9
#define SDMA_GFX_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                        0xc
#define SDMA_GFX_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                   0xd
#define SDMA_GFX_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                         0x10
#define SDMA_GFX_RB_CNTL__RB_PRIV__SHIFT                                                                      0x17
#define SDMA_GFX_RB_CNTL__RB_VMID__SHIFT                                                                      0x18
#define SDMA_GFX_RB_CNTL__RB_ENABLE_MASK                                                                      0x00000001L
#define SDMA_GFX_RB_CNTL__RB_SIZE_MASK                                                                        0x0000003EL
#define SDMA_GFX_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                 0x00000200L
#define SDMA_GFX_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                          0x00001000L
#define SDMA_GFX_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                     0x00002000L
#define SDMA_GFX_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                           0x001F0000L
#define SDMA_GFX_RB_CNTL__RB_PRIV_MASK                                                                        0x00800000L
#define SDMA_GFX_RB_CNTL__RB_VMID_MASK                                                                        0x0F000000L
//SDMA_GFX_RB_BASE
#define SDMA_GFX_RB_BASE__ADDR__SHIFT                                                                         0x0
#define SDMA_GFX_RB_BASE__ADDR_MASK                                                                           0xFFFFFFFFL
//SDMA_GFX_RB_BASE_HI
#define SDMA_GFX_RB_BASE_HI__ADDR__SHIFT                                                                      0x0
#define SDMA_GFX_RB_BASE_HI__ADDR_MASK                                                                        0x00FFFFFFL
//SDMA_GFX_RB_RPTR
#define SDMA_GFX_RB_RPTR__OFFSET__SHIFT                                                                       0x0
#define SDMA_GFX_RB_RPTR__OFFSET_MASK                                                                         0xFFFFFFFFL
//SDMA_GFX_RB_RPTR_HI
#define SDMA_GFX_RB_RPTR_HI__OFFSET__SHIFT                                                                    0x0
#define SDMA_GFX_RB_RPTR_HI__OFFSET_MASK                                                                      0xFFFFFFFFL
//SDMA_GFX_RB_WPTR
#define SDMA_GFX_RB_WPTR__OFFSET__SHIFT                                                                       0x0
#define SDMA_GFX_RB_WPTR__OFFSET_MASK                                                                         0xFFFFFFFFL
//SDMA_GFX_RB_WPTR_HI
#define SDMA_GFX_RB_WPTR_HI__OFFSET__SHIFT                                                                    0x0
#define SDMA_GFX_RB_WPTR_HI__OFFSET_MASK                                                                      0xFFFFFFFFL
//SDMA_GFX_RB_WPTR_POLL_CNTL
#define SDMA_GFX_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                             0x0
#define SDMA_GFX_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                        0x1
#define SDMA_GFX_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                    0x2
#define SDMA_GFX_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                          0x4
#define SDMA_GFX_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                    0x10
#define SDMA_GFX_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                               0x00000001L
#define SDMA_GFX_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                          0x00000002L
#define SDMA_GFX_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                      0x00000004L
#define SDMA_GFX_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                            0x0000FFF0L
#define SDMA_GFX_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                      0xFFFF0000L
//SDMA_GFX_RB_RPTR_ADDR_HI
#define SDMA_GFX_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                 0x0
#define SDMA_GFX_RB_RPTR_ADDR_HI__ADDR_MASK                                                                   0xFFFFFFFFL
//SDMA_GFX_RB_RPTR_ADDR_LO
#define SDMA_GFX_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                         0x0
#define SDMA_GFX_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                 0x2
#define SDMA_GFX_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                           0x00000001L
#define SDMA_GFX_RB_RPTR_ADDR_LO__ADDR_MASK                                                                   0xFFFFFFFCL
//SDMA_GFX_IB_CNTL
#define SDMA_GFX_IB_CNTL__IB_ENABLE__SHIFT                                                                    0x0
#define SDMA_GFX_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                               0x4
#define SDMA_GFX_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                             0x8
#define SDMA_GFX_IB_CNTL__CMD_VMID__SHIFT                                                                     0x10
#define SDMA_GFX_IB_CNTL__IB_PRIV__SHIFT                                                                      0x1f
#define SDMA_GFX_IB_CNTL__IB_ENABLE_MASK                                                                      0x00000001L
#define SDMA_GFX_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                 0x00000010L
#define SDMA_GFX_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                               0x00000100L
#define SDMA_GFX_IB_CNTL__CMD_VMID_MASK                                                                       0x000F0000L
#define SDMA_GFX_IB_CNTL__IB_PRIV_MASK                                                                        0x80000000L
//SDMA_GFX_IB_RPTR
#define SDMA_GFX_IB_RPTR__OFFSET__SHIFT                                                                       0x2
#define SDMA_GFX_IB_RPTR__OFFSET_MASK                                                                         0x003FFFFCL
//SDMA_GFX_IB_OFFSET
#define SDMA_GFX_IB_OFFSET__OFFSET__SHIFT                                                                     0x2
#define SDMA_GFX_IB_OFFSET__OFFSET_MASK                                                                       0x003FFFFCL
//SDMA_GFX_IB_BASE_LO
#define SDMA_GFX_IB_BASE_LO__ADDR__SHIFT                                                                      0x5
#define SDMA_GFX_IB_BASE_LO__ADDR_MASK                                                                        0xFFFFFFE0L
//SDMA_GFX_IB_BASE_HI
#define SDMA_GFX_IB_BASE_HI__ADDR__SHIFT                                                                      0x0
#define SDMA_GFX_IB_BASE_HI__ADDR_MASK                                                                        0xFFFFFFFFL
//SDMA_GFX_IB_SIZE
#define SDMA_GFX_IB_SIZE__SIZE__SHIFT                                                                         0x0
#define SDMA_GFX_IB_SIZE__SIZE_MASK                                                                           0x000FFFFFL
//SDMA_GFX_SKIP_CNTL
#define SDMA_GFX_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                 0x0
#define SDMA_GFX_SKIP_CNTL__SKIP_COUNT_MASK                                                                   0x000FFFFFL
//SDMA_GFX_CONTEXT_STATUS
#define SDMA_GFX_CONTEXT_STATUS__SELECTED__SHIFT                                                              0x0
#define SDMA_GFX_CONTEXT_STATUS__IDLE__SHIFT                                                                  0x2
#define SDMA_GFX_CONTEXT_STATUS__EXPIRED__SHIFT                                                               0x3
#define SDMA_GFX_CONTEXT_STATUS__EXCEPTION__SHIFT                                                             0x4
#define SDMA_GFX_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                            0x7
#define SDMA_GFX_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                           0x8
#define SDMA_GFX_CONTEXT_STATUS__PREEMPTED__SHIFT                                                             0x9
#define SDMA_GFX_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                       0xa
#define SDMA_GFX_CONTEXT_STATUS__SELECTED_MASK                                                                0x00000001L
#define SDMA_GFX_CONTEXT_STATUS__IDLE_MASK                                                                    0x00000004L
#define SDMA_GFX_CONTEXT_STATUS__EXPIRED_MASK                                                                 0x00000008L
#define SDMA_GFX_CONTEXT_STATUS__EXCEPTION_MASK                                                               0x00000070L
#define SDMA_GFX_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                              0x00000080L
#define SDMA_GFX_CONTEXT_STATUS__CTXSW_READY_MASK                                                             0x00000100L
#define SDMA_GFX_CONTEXT_STATUS__PREEMPTED_MASK                                                               0x00000200L
#define SDMA_GFX_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                         0x00000400L
//SDMA_GFX_DOORBELL
#define SDMA_GFX_DOORBELL__ENABLE__SHIFT                                                                      0x1c
#define SDMA_GFX_DOORBELL__CAPTURED__SHIFT                                                                    0x1e
#define SDMA_GFX_DOORBELL__ENABLE_MASK                                                                        0x10000000L
#define SDMA_GFX_DOORBELL__CAPTURED_MASK                                                                      0x40000000L
//SDMA_GFX_CONTEXT_CNTL
#define SDMA_GFX_CONTEXT_CNTL__RESUME_CTX__SHIFT                                                              0x10
#define SDMA_GFX_CONTEXT_CNTL__SESSION_SEL__SHIFT                                                             0x18
#define SDMA_GFX_CONTEXT_CNTL__RESUME_CTX_MASK                                                                0x00010000L
#define SDMA_GFX_CONTEXT_CNTL__SESSION_SEL_MASK                                                               0x0F000000L
//SDMA_GFX_STATUS
#define SDMA_GFX_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                        0x0
#define SDMA_GFX_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                           0x8
#define SDMA_GFX_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                          0x000000FFL
#define SDMA_GFX_STATUS__WPTR_UPDATE_PENDING_MASK                                                             0x00000100L
//SDMA_GFX_DOORBELL_LOG
#define SDMA_GFX_DOORBELL_LOG__BE_ERROR__SHIFT                                                                0x0
#define SDMA_GFX_DOORBELL_LOG__DATA__SHIFT                                                                    0x2
#define SDMA_GFX_DOORBELL_LOG__BE_ERROR_MASK                                                                  0x00000001L
#define SDMA_GFX_DOORBELL_LOG__DATA_MASK                                                                      0xFFFFFFFCL
//SDMA_GFX_WATERMARK
#define SDMA_GFX_WATERMARK__RD_OUTSTANDING__SHIFT                                                             0x0
#define SDMA_GFX_WATERMARK__WR_OUTSTANDING__SHIFT                                                             0x10
#define SDMA_GFX_WATERMARK__RD_OUTSTANDING_MASK                                                               0x00000FFFL
#define SDMA_GFX_WATERMARK__WR_OUTSTANDING_MASK                                                               0x03FF0000L
//SDMA_GFX_DOORBELL_OFFSET
#define SDMA_GFX_DOORBELL_OFFSET__OFFSET__SHIFT                                                               0x2
#define SDMA_GFX_DOORBELL_OFFSET__OFFSET_MASK                                                                 0x0FFFFFFCL
//SDMA_GFX_CSA_ADDR_LO
#define SDMA_GFX_CSA_ADDR_LO__ADDR__SHIFT                                                                     0x2
#define SDMA_GFX_CSA_ADDR_LO__ADDR_MASK                                                                       0xFFFFFFFCL
//SDMA_GFX_CSA_ADDR_HI
#define SDMA_GFX_CSA_ADDR_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_GFX_CSA_ADDR_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_GFX_IB_SUB_REMAIN
#define SDMA_GFX_IB_SUB_REMAIN__SIZE__SHIFT                                                                   0x0
#define SDMA_GFX_IB_SUB_REMAIN__SIZE_MASK                                                                     0x000FFFFFL
//SDMA_GFX_PREEMPT
#define SDMA_GFX_PREEMPT__IB_PREEMPT__SHIFT                                                                   0x0
#define SDMA_GFX_PREEMPT__IB_PREEMPT_MASK                                                                     0x00000001L
//SDMA_GFX_DUMMY_REG
#define SDMA_GFX_DUMMY_REG__DUMMY__SHIFT                                                                      0x0
#define SDMA_GFX_DUMMY_REG__DUMMY_MASK                                                                        0xFFFFFFFFL
//SDMA_GFX_RB_WPTR_POLL_ADDR_HI
#define SDMA_GFX_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                            0x0
#define SDMA_GFX_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                              0xFFFFFFFFL
//SDMA_GFX_RB_WPTR_POLL_ADDR_LO
#define SDMA_GFX_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                            0x2
#define SDMA_GFX_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                              0xFFFFFFFCL
//SDMA_GFX_RB_AQL_CNTL
#define SDMA_GFX_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                               0x0
#define SDMA_GFX_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                          0x1
#define SDMA_GFX_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                              0x8
#define SDMA_GFX_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                 0x00000001L
#define SDMA_GFX_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                            0x000000FEL
#define SDMA_GFX_RB_AQL_CNTL__PACKET_STEP_MASK                                                                0x0000FF00L
//SDMA_GFX_MINOR_PTR_UPDATE
#define SDMA_GFX_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                              0x0
#define SDMA_GFX_MINOR_PTR_UPDATE__ENABLE_MASK                                                                0x00000001L
//SDMA_GFX_MIDCMD_DATA0
#define SDMA_GFX_MIDCMD_DATA0__DATA0__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA0__DATA0_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA1
#define SDMA_GFX_MIDCMD_DATA1__DATA1__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA1__DATA1_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA2
#define SDMA_GFX_MIDCMD_DATA2__DATA2__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA2__DATA2_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA3
#define SDMA_GFX_MIDCMD_DATA3__DATA3__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA3__DATA3_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA4
#define SDMA_GFX_MIDCMD_DATA4__DATA4__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA4__DATA4_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA5
#define SDMA_GFX_MIDCMD_DATA5__DATA5__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA5__DATA5_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA6
#define SDMA_GFX_MIDCMD_DATA6__DATA6__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA6__DATA6_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA7
#define SDMA_GFX_MIDCMD_DATA7__DATA7__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA7__DATA7_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA8
#define SDMA_GFX_MIDCMD_DATA8__DATA8__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA8__DATA8_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA9
#define SDMA_GFX_MIDCMD_DATA9__DATA9__SHIFT                                                                   0x0
#define SDMA_GFX_MIDCMD_DATA9__DATA9_MASK                                                                     0xFFFFFFFFL
//SDMA_GFX_MIDCMD_DATA10
#define SDMA_GFX_MIDCMD_DATA10__DATA10__SHIFT                                                                 0x0
#define SDMA_GFX_MIDCMD_DATA10__DATA10_MASK                                                                   0xFFFFFFFFL
//SDMA_GFX_MIDCMD_CNTL
#define SDMA_GFX_MIDCMD_CNTL__DATA_VALID__SHIFT                                                               0x0
#define SDMA_GFX_MIDCMD_CNTL__COPY_MODE__SHIFT                                                                0x1
#define SDMA_GFX_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                              0x4
#define SDMA_GFX_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                            0x8
#define SDMA_GFX_MIDCMD_CNTL__DATA_VALID_MASK                                                                 0x00000001L
#define SDMA_GFX_MIDCMD_CNTL__COPY_MODE_MASK                                                                  0x00000002L
#define SDMA_GFX_MIDCMD_CNTL__SPLIT_STATE_MASK                                                                0x000000F0L
#define SDMA_GFX_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                              0x00000100L
//SDMA_PAGE_RB_CNTL
#define SDMA_PAGE_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_PAGE_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_PAGE_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_PAGE_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_PAGE_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_PAGE_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_PAGE_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_PAGE_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_PAGE_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_PAGE_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_PAGE_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_PAGE_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_PAGE_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_PAGE_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_PAGE_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_PAGE_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_PAGE_RB_BASE
#define SDMA_PAGE_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_PAGE_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_PAGE_RB_BASE_HI
#define SDMA_PAGE_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_PAGE_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_PAGE_RB_RPTR
#define SDMA_PAGE_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_PAGE_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_PAGE_RB_RPTR_HI
#define SDMA_PAGE_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_PAGE_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_PAGE_RB_WPTR
#define SDMA_PAGE_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_PAGE_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_PAGE_RB_WPTR_HI
#define SDMA_PAGE_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_PAGE_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_PAGE_RB_WPTR_POLL_CNTL
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_PAGE_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_PAGE_RB_RPTR_ADDR_HI
#define SDMA_PAGE_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_PAGE_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_PAGE_RB_RPTR_ADDR_LO
#define SDMA_PAGE_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_PAGE_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_PAGE_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_PAGE_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_PAGE_IB_CNTL
#define SDMA_PAGE_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_PAGE_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_PAGE_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_PAGE_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_PAGE_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_PAGE_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_PAGE_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_PAGE_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_PAGE_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_PAGE_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_PAGE_IB_RPTR
#define SDMA_PAGE_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_PAGE_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_PAGE_IB_OFFSET
#define SDMA_PAGE_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_PAGE_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_PAGE_IB_BASE_LO
#define SDMA_PAGE_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_PAGE_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_PAGE_IB_BASE_HI
#define SDMA_PAGE_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_PAGE_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_PAGE_IB_SIZE
#define SDMA_PAGE_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_PAGE_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_PAGE_SKIP_CNTL
#define SDMA_PAGE_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_PAGE_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_PAGE_CONTEXT_STATUS
#define SDMA_PAGE_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_PAGE_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_PAGE_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_PAGE_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_PAGE_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_PAGE_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_PAGE_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_PAGE_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_PAGE_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_PAGE_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_PAGE_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_PAGE_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_PAGE_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_PAGE_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_PAGE_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_PAGE_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_PAGE_DOORBELL
#define SDMA_PAGE_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_PAGE_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_PAGE_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_PAGE_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_PAGE_STATUS
#define SDMA_PAGE_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_PAGE_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_PAGE_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_PAGE_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_PAGE_DOORBELL_LOG
#define SDMA_PAGE_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_PAGE_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_PAGE_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_PAGE_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_PAGE_WATERMARK
#define SDMA_PAGE_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_PAGE_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_PAGE_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_PAGE_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_PAGE_DOORBELL_OFFSET
#define SDMA_PAGE_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_PAGE_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_PAGE_CSA_ADDR_LO
#define SDMA_PAGE_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_PAGE_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_PAGE_CSA_ADDR_HI
#define SDMA_PAGE_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_PAGE_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_PAGE_IB_SUB_REMAIN
#define SDMA_PAGE_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_PAGE_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_PAGE_PREEMPT
#define SDMA_PAGE_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_PAGE_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_PAGE_DUMMY_REG
#define SDMA_PAGE_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_PAGE_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_PAGE_RB_WPTR_POLL_ADDR_HI
#define SDMA_PAGE_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_PAGE_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_PAGE_RB_WPTR_POLL_ADDR_LO
#define SDMA_PAGE_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_PAGE_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_PAGE_RB_AQL_CNTL
#define SDMA_PAGE_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_PAGE_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_PAGE_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_PAGE_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_PAGE_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_PAGE_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_PAGE_MINOR_PTR_UPDATE
#define SDMA_PAGE_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_PAGE_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_PAGE_MIDCMD_DATA0
#define SDMA_PAGE_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA1
#define SDMA_PAGE_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA2
#define SDMA_PAGE_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA3
#define SDMA_PAGE_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA4
#define SDMA_PAGE_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA5
#define SDMA_PAGE_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA6
#define SDMA_PAGE_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA7
#define SDMA_PAGE_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA8
#define SDMA_PAGE_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA9
#define SDMA_PAGE_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_PAGE_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_DATA10
#define SDMA_PAGE_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_PAGE_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_PAGE_MIDCMD_CNTL
#define SDMA_PAGE_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_PAGE_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_PAGE_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_PAGE_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_PAGE_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_PAGE_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_PAGE_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_PAGE_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L
//SDMA_RLC0_RB_CNTL
#define SDMA_RLC0_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC0_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_RLC0_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_RLC0_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_RLC0_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_RLC0_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_RLC0_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_RLC0_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_RLC0_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC0_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_RLC0_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_RLC0_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_RLC0_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_RLC0_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_RLC0_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_RLC0_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_RLC0_RB_BASE
#define SDMA_RLC0_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_RLC0_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_RLC0_RB_BASE_HI
#define SDMA_RLC0_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC0_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_RLC0_RB_RPTR
#define SDMA_RLC0_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC0_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC0_RB_RPTR_HI
#define SDMA_RLC0_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC0_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC0_RB_WPTR
#define SDMA_RLC0_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC0_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC0_RB_WPTR_HI
#define SDMA_RLC0_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC0_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC0_RB_WPTR_POLL_CNTL
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_RLC0_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_RLC0_RB_RPTR_ADDR_HI
#define SDMA_RLC0_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_RLC0_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC0_RB_RPTR_ADDR_LO
#define SDMA_RLC0_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_RLC0_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_RLC0_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_RLC0_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_RLC0_IB_CNTL
#define SDMA_RLC0_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC0_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_RLC0_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_RLC0_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_RLC0_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_RLC0_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC0_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_RLC0_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_RLC0_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_RLC0_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_RLC0_IB_RPTR
#define SDMA_RLC0_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_RLC0_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_RLC0_IB_OFFSET
#define SDMA_RLC0_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_RLC0_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_RLC0_IB_BASE_LO
#define SDMA_RLC0_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_RLC0_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_RLC0_IB_BASE_HI
#define SDMA_RLC0_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC0_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC0_IB_SIZE
#define SDMA_RLC0_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_RLC0_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_RLC0_SKIP_CNTL
#define SDMA_RLC0_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_RLC0_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_RLC0_CONTEXT_STATUS
#define SDMA_RLC0_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_RLC0_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_RLC0_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_RLC0_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_RLC0_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_RLC0_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_RLC0_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_RLC0_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_RLC0_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_RLC0_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_RLC0_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_RLC0_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_RLC0_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_RLC0_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_RLC0_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_RLC0_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_RLC0_DOORBELL
#define SDMA_RLC0_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_RLC0_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_RLC0_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_RLC0_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_RLC0_STATUS
#define SDMA_RLC0_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_RLC0_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_RLC0_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_RLC0_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_RLC0_DOORBELL_LOG
#define SDMA_RLC0_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_RLC0_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_RLC0_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_RLC0_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_RLC0_WATERMARK
#define SDMA_RLC0_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_RLC0_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_RLC0_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_RLC0_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_RLC0_DOORBELL_OFFSET
#define SDMA_RLC0_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_RLC0_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_RLC0_CSA_ADDR_LO
#define SDMA_RLC0_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_RLC0_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_RLC0_CSA_ADDR_HI
#define SDMA_RLC0_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_RLC0_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_RLC0_IB_SUB_REMAIN
#define SDMA_RLC0_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_RLC0_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_RLC0_PREEMPT
#define SDMA_RLC0_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_RLC0_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_RLC0_DUMMY_REG
#define SDMA_RLC0_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_RLC0_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC0_RB_WPTR_POLL_ADDR_HI
#define SDMA_RLC0_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_RLC0_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_RLC0_RB_WPTR_POLL_ADDR_LO
#define SDMA_RLC0_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_RLC0_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_RLC0_RB_AQL_CNTL
#define SDMA_RLC0_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_RLC0_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_RLC0_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_RLC0_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_RLC0_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_RLC0_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_RLC0_MINOR_PTR_UPDATE
#define SDMA_RLC0_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_RLC0_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_RLC0_MIDCMD_DATA0
#define SDMA_RLC0_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA1
#define SDMA_RLC0_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA2
#define SDMA_RLC0_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA3
#define SDMA_RLC0_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA4
#define SDMA_RLC0_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA5
#define SDMA_RLC0_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA6
#define SDMA_RLC0_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA7
#define SDMA_RLC0_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA8
#define SDMA_RLC0_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA9
#define SDMA_RLC0_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_RLC0_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_DATA10
#define SDMA_RLC0_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_RLC0_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC0_MIDCMD_CNTL
#define SDMA_RLC0_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_RLC0_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_RLC0_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_RLC0_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_RLC0_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_RLC0_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_RLC0_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_RLC0_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L
//SDMA_RLC1_RB_CNTL
#define SDMA_RLC1_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC1_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_RLC1_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_RLC1_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_RLC1_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_RLC1_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_RLC1_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_RLC1_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_RLC1_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC1_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_RLC1_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_RLC1_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_RLC1_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_RLC1_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_RLC1_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_RLC1_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_RLC1_RB_BASE
#define SDMA_RLC1_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_RLC1_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_RLC1_RB_BASE_HI
#define SDMA_RLC1_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC1_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_RLC1_RB_RPTR
#define SDMA_RLC1_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC1_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC1_RB_RPTR_HI
#define SDMA_RLC1_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC1_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC1_RB_WPTR
#define SDMA_RLC1_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC1_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC1_RB_WPTR_HI
#define SDMA_RLC1_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC1_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC1_RB_WPTR_POLL_CNTL
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_RLC1_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_RLC1_RB_RPTR_ADDR_HI
#define SDMA_RLC1_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_RLC1_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC1_RB_RPTR_ADDR_LO
#define SDMA_RLC1_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_RLC1_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_RLC1_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_RLC1_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_RLC1_IB_CNTL
#define SDMA_RLC1_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC1_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_RLC1_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_RLC1_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_RLC1_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_RLC1_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC1_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_RLC1_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_RLC1_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_RLC1_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_RLC1_IB_RPTR
#define SDMA_RLC1_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_RLC1_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_RLC1_IB_OFFSET
#define SDMA_RLC1_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_RLC1_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_RLC1_IB_BASE_LO
#define SDMA_RLC1_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_RLC1_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_RLC1_IB_BASE_HI
#define SDMA_RLC1_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC1_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC1_IB_SIZE
#define SDMA_RLC1_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_RLC1_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_RLC1_SKIP_CNTL
#define SDMA_RLC1_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_RLC1_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_RLC1_CONTEXT_STATUS
#define SDMA_RLC1_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_RLC1_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_RLC1_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_RLC1_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_RLC1_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_RLC1_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_RLC1_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_RLC1_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_RLC1_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_RLC1_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_RLC1_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_RLC1_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_RLC1_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_RLC1_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_RLC1_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_RLC1_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_RLC1_DOORBELL
#define SDMA_RLC1_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_RLC1_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_RLC1_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_RLC1_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_RLC1_STATUS
#define SDMA_RLC1_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_RLC1_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_RLC1_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_RLC1_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_RLC1_DOORBELL_LOG
#define SDMA_RLC1_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_RLC1_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_RLC1_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_RLC1_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_RLC1_WATERMARK
#define SDMA_RLC1_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_RLC1_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_RLC1_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_RLC1_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_RLC1_DOORBELL_OFFSET
#define SDMA_RLC1_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_RLC1_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_RLC1_CSA_ADDR_LO
#define SDMA_RLC1_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_RLC1_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_RLC1_CSA_ADDR_HI
#define SDMA_RLC1_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_RLC1_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_RLC1_IB_SUB_REMAIN
#define SDMA_RLC1_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_RLC1_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_RLC1_PREEMPT
#define SDMA_RLC1_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_RLC1_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_RLC1_DUMMY_REG
#define SDMA_RLC1_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_RLC1_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC1_RB_WPTR_POLL_ADDR_HI
#define SDMA_RLC1_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_RLC1_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_RLC1_RB_WPTR_POLL_ADDR_LO
#define SDMA_RLC1_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_RLC1_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_RLC1_RB_AQL_CNTL
#define SDMA_RLC1_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_RLC1_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_RLC1_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_RLC1_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_RLC1_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_RLC1_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_RLC1_MINOR_PTR_UPDATE
#define SDMA_RLC1_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_RLC1_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_RLC1_MIDCMD_DATA0
#define SDMA_RLC1_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA1
#define SDMA_RLC1_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA2
#define SDMA_RLC1_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA3
#define SDMA_RLC1_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA4
#define SDMA_RLC1_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA5
#define SDMA_RLC1_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA6
#define SDMA_RLC1_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA7
#define SDMA_RLC1_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA8
#define SDMA_RLC1_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA9
#define SDMA_RLC1_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_RLC1_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_DATA10
#define SDMA_RLC1_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_RLC1_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC1_MIDCMD_CNTL
#define SDMA_RLC1_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_RLC1_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_RLC1_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_RLC1_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_RLC1_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_RLC1_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_RLC1_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_RLC1_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L
//SDMA_RLC2_RB_CNTL
#define SDMA_RLC2_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC2_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_RLC2_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_RLC2_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_RLC2_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_RLC2_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_RLC2_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_RLC2_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_RLC2_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC2_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_RLC2_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_RLC2_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_RLC2_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_RLC2_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_RLC2_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_RLC2_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_RLC2_RB_BASE
#define SDMA_RLC2_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_RLC2_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_RLC2_RB_BASE_HI
#define SDMA_RLC2_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC2_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_RLC2_RB_RPTR
#define SDMA_RLC2_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC2_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC2_RB_RPTR_HI
#define SDMA_RLC2_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC2_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC2_RB_WPTR
#define SDMA_RLC2_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC2_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC2_RB_WPTR_HI
#define SDMA_RLC2_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC2_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC2_RB_WPTR_POLL_CNTL
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_RLC2_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_RLC2_RB_RPTR_ADDR_HI
#define SDMA_RLC2_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_RLC2_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC2_RB_RPTR_ADDR_LO
#define SDMA_RLC2_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_RLC2_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_RLC2_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_RLC2_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_RLC2_IB_CNTL
#define SDMA_RLC2_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC2_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_RLC2_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_RLC2_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_RLC2_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_RLC2_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC2_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_RLC2_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_RLC2_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_RLC2_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_RLC2_IB_RPTR
#define SDMA_RLC2_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_RLC2_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_RLC2_IB_OFFSET
#define SDMA_RLC2_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_RLC2_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_RLC2_IB_BASE_LO
#define SDMA_RLC2_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_RLC2_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_RLC2_IB_BASE_HI
#define SDMA_RLC2_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC2_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC2_IB_SIZE
#define SDMA_RLC2_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_RLC2_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_RLC2_SKIP_CNTL
#define SDMA_RLC2_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_RLC2_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_RLC2_CONTEXT_STATUS
#define SDMA_RLC2_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_RLC2_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_RLC2_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_RLC2_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_RLC2_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_RLC2_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_RLC2_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_RLC2_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_RLC2_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_RLC2_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_RLC2_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_RLC2_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_RLC2_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_RLC2_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_RLC2_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_RLC2_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_RLC2_DOORBELL
#define SDMA_RLC2_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_RLC2_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_RLC2_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_RLC2_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_RLC2_STATUS
#define SDMA_RLC2_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_RLC2_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_RLC2_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_RLC2_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_RLC2_DOORBELL_LOG
#define SDMA_RLC2_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_RLC2_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_RLC2_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_RLC2_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_RLC2_WATERMARK
#define SDMA_RLC2_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_RLC2_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_RLC2_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_RLC2_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_RLC2_DOORBELL_OFFSET
#define SDMA_RLC2_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_RLC2_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_RLC2_CSA_ADDR_LO
#define SDMA_RLC2_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_RLC2_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_RLC2_CSA_ADDR_HI
#define SDMA_RLC2_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_RLC2_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_RLC2_IB_SUB_REMAIN
#define SDMA_RLC2_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_RLC2_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_RLC2_PREEMPT
#define SDMA_RLC2_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_RLC2_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_RLC2_DUMMY_REG
#define SDMA_RLC2_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_RLC2_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC2_RB_WPTR_POLL_ADDR_HI
#define SDMA_RLC2_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_RLC2_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_RLC2_RB_WPTR_POLL_ADDR_LO
#define SDMA_RLC2_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_RLC2_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_RLC2_RB_AQL_CNTL
#define SDMA_RLC2_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_RLC2_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_RLC2_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_RLC2_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_RLC2_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_RLC2_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_RLC2_MINOR_PTR_UPDATE
#define SDMA_RLC2_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_RLC2_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_RLC2_MIDCMD_DATA0
#define SDMA_RLC2_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA1
#define SDMA_RLC2_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA2
#define SDMA_RLC2_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA3
#define SDMA_RLC2_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA4
#define SDMA_RLC2_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA5
#define SDMA_RLC2_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA6
#define SDMA_RLC2_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA7
#define SDMA_RLC2_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA8
#define SDMA_RLC2_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA9
#define SDMA_RLC2_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_RLC2_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_DATA10
#define SDMA_RLC2_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_RLC2_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC2_MIDCMD_CNTL
#define SDMA_RLC2_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_RLC2_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_RLC2_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_RLC2_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_RLC2_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_RLC2_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_RLC2_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_RLC2_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L
//SDMA_RLC3_RB_CNTL
#define SDMA_RLC3_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC3_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_RLC3_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_RLC3_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_RLC3_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_RLC3_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_RLC3_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_RLC3_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_RLC3_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC3_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_RLC3_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_RLC3_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_RLC3_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_RLC3_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_RLC3_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_RLC3_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_RLC3_RB_BASE
#define SDMA_RLC3_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_RLC3_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_RLC3_RB_BASE_HI
#define SDMA_RLC3_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC3_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_RLC3_RB_RPTR
#define SDMA_RLC3_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC3_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC3_RB_RPTR_HI
#define SDMA_RLC3_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC3_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC3_RB_WPTR
#define SDMA_RLC3_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC3_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC3_RB_WPTR_HI
#define SDMA_RLC3_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC3_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC3_RB_WPTR_POLL_CNTL
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_RLC3_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_RLC3_RB_RPTR_ADDR_HI
#define SDMA_RLC3_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_RLC3_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC3_RB_RPTR_ADDR_LO
#define SDMA_RLC3_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_RLC3_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_RLC3_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_RLC3_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_RLC3_IB_CNTL
#define SDMA_RLC3_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC3_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_RLC3_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_RLC3_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_RLC3_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_RLC3_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC3_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_RLC3_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_RLC3_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_RLC3_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_RLC3_IB_RPTR
#define SDMA_RLC3_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_RLC3_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_RLC3_IB_OFFSET
#define SDMA_RLC3_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_RLC3_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_RLC3_IB_BASE_LO
#define SDMA_RLC3_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_RLC3_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_RLC3_IB_BASE_HI
#define SDMA_RLC3_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC3_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC3_IB_SIZE
#define SDMA_RLC3_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_RLC3_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_RLC3_SKIP_CNTL
#define SDMA_RLC3_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_RLC3_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_RLC3_CONTEXT_STATUS
#define SDMA_RLC3_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_RLC3_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_RLC3_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_RLC3_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_RLC3_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_RLC3_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_RLC3_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_RLC3_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_RLC3_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_RLC3_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_RLC3_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_RLC3_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_RLC3_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_RLC3_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_RLC3_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_RLC3_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_RLC3_DOORBELL
#define SDMA_RLC3_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_RLC3_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_RLC3_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_RLC3_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_RLC3_STATUS
#define SDMA_RLC3_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_RLC3_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_RLC3_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_RLC3_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_RLC3_DOORBELL_LOG
#define SDMA_RLC3_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_RLC3_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_RLC3_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_RLC3_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_RLC3_WATERMARK
#define SDMA_RLC3_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_RLC3_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_RLC3_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_RLC3_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_RLC3_DOORBELL_OFFSET
#define SDMA_RLC3_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_RLC3_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_RLC3_CSA_ADDR_LO
#define SDMA_RLC3_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_RLC3_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_RLC3_CSA_ADDR_HI
#define SDMA_RLC3_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_RLC3_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_RLC3_IB_SUB_REMAIN
#define SDMA_RLC3_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_RLC3_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_RLC3_PREEMPT
#define SDMA_RLC3_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_RLC3_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_RLC3_DUMMY_REG
#define SDMA_RLC3_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_RLC3_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC3_RB_WPTR_POLL_ADDR_HI
#define SDMA_RLC3_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_RLC3_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_RLC3_RB_WPTR_POLL_ADDR_LO
#define SDMA_RLC3_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_RLC3_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_RLC3_RB_AQL_CNTL
#define SDMA_RLC3_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_RLC3_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_RLC3_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_RLC3_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_RLC3_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_RLC3_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_RLC3_MINOR_PTR_UPDATE
#define SDMA_RLC3_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_RLC3_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_RLC3_MIDCMD_DATA0
#define SDMA_RLC3_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA1
#define SDMA_RLC3_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA2
#define SDMA_RLC3_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA3
#define SDMA_RLC3_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA4
#define SDMA_RLC3_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA5
#define SDMA_RLC3_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA6
#define SDMA_RLC3_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA7
#define SDMA_RLC3_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA8
#define SDMA_RLC3_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA9
#define SDMA_RLC3_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_RLC3_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_DATA10
#define SDMA_RLC3_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_RLC3_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC3_MIDCMD_CNTL
#define SDMA_RLC3_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_RLC3_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_RLC3_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_RLC3_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_RLC3_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_RLC3_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_RLC3_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_RLC3_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L
//SDMA_RLC4_RB_CNTL
#define SDMA_RLC4_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC4_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_RLC4_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_RLC4_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_RLC4_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_RLC4_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_RLC4_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_RLC4_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_RLC4_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC4_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_RLC4_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_RLC4_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_RLC4_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_RLC4_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_RLC4_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_RLC4_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_RLC4_RB_BASE
#define SDMA_RLC4_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_RLC4_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_RLC4_RB_BASE_HI
#define SDMA_RLC4_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC4_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_RLC4_RB_RPTR
#define SDMA_RLC4_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC4_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC4_RB_RPTR_HI
#define SDMA_RLC4_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC4_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC4_RB_WPTR
#define SDMA_RLC4_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC4_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC4_RB_WPTR_HI
#define SDMA_RLC4_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC4_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC4_RB_WPTR_POLL_CNTL
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_RLC4_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_RLC4_RB_RPTR_ADDR_HI
#define SDMA_RLC4_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_RLC4_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC4_RB_RPTR_ADDR_LO
#define SDMA_RLC4_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_RLC4_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_RLC4_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_RLC4_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_RLC4_IB_CNTL
#define SDMA_RLC4_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC4_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_RLC4_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_RLC4_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_RLC4_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_RLC4_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC4_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_RLC4_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_RLC4_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_RLC4_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_RLC4_IB_RPTR
#define SDMA_RLC4_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_RLC4_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_RLC4_IB_OFFSET
#define SDMA_RLC4_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_RLC4_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_RLC4_IB_BASE_LO
#define SDMA_RLC4_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_RLC4_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_RLC4_IB_BASE_HI
#define SDMA_RLC4_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC4_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC4_IB_SIZE
#define SDMA_RLC4_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_RLC4_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_RLC4_SKIP_CNTL
#define SDMA_RLC4_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_RLC4_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_RLC4_CONTEXT_STATUS
#define SDMA_RLC4_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_RLC4_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_RLC4_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_RLC4_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_RLC4_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_RLC4_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_RLC4_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_RLC4_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_RLC4_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_RLC4_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_RLC4_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_RLC4_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_RLC4_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_RLC4_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_RLC4_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_RLC4_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_RLC4_DOORBELL
#define SDMA_RLC4_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_RLC4_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_RLC4_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_RLC4_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_RLC4_STATUS
#define SDMA_RLC4_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_RLC4_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_RLC4_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_RLC4_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_RLC4_DOORBELL_LOG
#define SDMA_RLC4_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_RLC4_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_RLC4_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_RLC4_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_RLC4_WATERMARK
#define SDMA_RLC4_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_RLC4_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_RLC4_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_RLC4_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_RLC4_DOORBELL_OFFSET
#define SDMA_RLC4_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_RLC4_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_RLC4_CSA_ADDR_LO
#define SDMA_RLC4_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_RLC4_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_RLC4_CSA_ADDR_HI
#define SDMA_RLC4_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_RLC4_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_RLC4_IB_SUB_REMAIN
#define SDMA_RLC4_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_RLC4_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_RLC4_PREEMPT
#define SDMA_RLC4_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_RLC4_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_RLC4_DUMMY_REG
#define SDMA_RLC4_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_RLC4_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC4_RB_WPTR_POLL_ADDR_HI
#define SDMA_RLC4_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_RLC4_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_RLC4_RB_WPTR_POLL_ADDR_LO
#define SDMA_RLC4_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_RLC4_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_RLC4_RB_AQL_CNTL
#define SDMA_RLC4_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_RLC4_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_RLC4_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_RLC4_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_RLC4_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_RLC4_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_RLC4_MINOR_PTR_UPDATE
#define SDMA_RLC4_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_RLC4_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_RLC4_MIDCMD_DATA0
#define SDMA_RLC4_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA1
#define SDMA_RLC4_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA2
#define SDMA_RLC4_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA3
#define SDMA_RLC4_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA4
#define SDMA_RLC4_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA5
#define SDMA_RLC4_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA6
#define SDMA_RLC4_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA7
#define SDMA_RLC4_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA8
#define SDMA_RLC4_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA9
#define SDMA_RLC4_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_RLC4_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_DATA10
#define SDMA_RLC4_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_RLC4_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC4_MIDCMD_CNTL
#define SDMA_RLC4_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_RLC4_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_RLC4_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_RLC4_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_RLC4_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_RLC4_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_RLC4_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_RLC4_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L
//SDMA_RLC5_RB_CNTL
#define SDMA_RLC5_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC5_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_RLC5_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_RLC5_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_RLC5_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_RLC5_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_RLC5_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_RLC5_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_RLC5_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC5_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_RLC5_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_RLC5_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_RLC5_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_RLC5_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_RLC5_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_RLC5_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_RLC5_RB_BASE
#define SDMA_RLC5_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_RLC5_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_RLC5_RB_BASE_HI
#define SDMA_RLC5_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC5_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_RLC5_RB_RPTR
#define SDMA_RLC5_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC5_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC5_RB_RPTR_HI
#define SDMA_RLC5_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC5_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC5_RB_WPTR
#define SDMA_RLC5_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC5_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC5_RB_WPTR_HI
#define SDMA_RLC5_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC5_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC5_RB_WPTR_POLL_CNTL
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_RLC5_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_RLC5_RB_RPTR_ADDR_HI
#define SDMA_RLC5_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_RLC5_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC5_RB_RPTR_ADDR_LO
#define SDMA_RLC5_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_RLC5_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_RLC5_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_RLC5_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_RLC5_IB_CNTL
#define SDMA_RLC5_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC5_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_RLC5_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_RLC5_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_RLC5_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_RLC5_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC5_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_RLC5_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_RLC5_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_RLC5_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_RLC5_IB_RPTR
#define SDMA_RLC5_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_RLC5_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_RLC5_IB_OFFSET
#define SDMA_RLC5_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_RLC5_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_RLC5_IB_BASE_LO
#define SDMA_RLC5_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_RLC5_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_RLC5_IB_BASE_HI
#define SDMA_RLC5_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC5_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC5_IB_SIZE
#define SDMA_RLC5_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_RLC5_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_RLC5_SKIP_CNTL
#define SDMA_RLC5_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_RLC5_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_RLC5_CONTEXT_STATUS
#define SDMA_RLC5_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_RLC5_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_RLC5_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_RLC5_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_RLC5_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_RLC5_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_RLC5_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_RLC5_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_RLC5_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_RLC5_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_RLC5_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_RLC5_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_RLC5_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_RLC5_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_RLC5_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_RLC5_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_RLC5_DOORBELL
#define SDMA_RLC5_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_RLC5_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_RLC5_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_RLC5_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_RLC5_STATUS
#define SDMA_RLC5_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_RLC5_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_RLC5_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_RLC5_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_RLC5_DOORBELL_LOG
#define SDMA_RLC5_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_RLC5_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_RLC5_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_RLC5_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_RLC5_WATERMARK
#define SDMA_RLC5_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_RLC5_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_RLC5_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_RLC5_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_RLC5_DOORBELL_OFFSET
#define SDMA_RLC5_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_RLC5_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_RLC5_CSA_ADDR_LO
#define SDMA_RLC5_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_RLC5_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_RLC5_CSA_ADDR_HI
#define SDMA_RLC5_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_RLC5_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_RLC5_IB_SUB_REMAIN
#define SDMA_RLC5_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_RLC5_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_RLC5_PREEMPT
#define SDMA_RLC5_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_RLC5_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_RLC5_DUMMY_REG
#define SDMA_RLC5_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_RLC5_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC5_RB_WPTR_POLL_ADDR_HI
#define SDMA_RLC5_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_RLC5_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_RLC5_RB_WPTR_POLL_ADDR_LO
#define SDMA_RLC5_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_RLC5_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_RLC5_RB_AQL_CNTL
#define SDMA_RLC5_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_RLC5_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_RLC5_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_RLC5_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_RLC5_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_RLC5_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_RLC5_MINOR_PTR_UPDATE
#define SDMA_RLC5_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_RLC5_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_RLC5_MIDCMD_DATA0
#define SDMA_RLC5_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA1
#define SDMA_RLC5_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA2
#define SDMA_RLC5_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA3
#define SDMA_RLC5_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA4
#define SDMA_RLC5_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA5
#define SDMA_RLC5_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA6
#define SDMA_RLC5_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA7
#define SDMA_RLC5_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA8
#define SDMA_RLC5_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA9
#define SDMA_RLC5_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_RLC5_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_DATA10
#define SDMA_RLC5_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_RLC5_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC5_MIDCMD_CNTL
#define SDMA_RLC5_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_RLC5_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_RLC5_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_RLC5_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_RLC5_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_RLC5_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_RLC5_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_RLC5_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L
//SDMA_RLC6_RB_CNTL
#define SDMA_RLC6_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC6_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_RLC6_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_RLC6_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_RLC6_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_RLC6_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_RLC6_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_RLC6_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_RLC6_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC6_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_RLC6_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_RLC6_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_RLC6_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_RLC6_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_RLC6_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_RLC6_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_RLC6_RB_BASE
#define SDMA_RLC6_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_RLC6_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_RLC6_RB_BASE_HI
#define SDMA_RLC6_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC6_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_RLC6_RB_RPTR
#define SDMA_RLC6_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC6_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC6_RB_RPTR_HI
#define SDMA_RLC6_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC6_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC6_RB_WPTR
#define SDMA_RLC6_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC6_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC6_RB_WPTR_HI
#define SDMA_RLC6_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC6_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC6_RB_WPTR_POLL_CNTL
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_RLC6_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_RLC6_RB_RPTR_ADDR_HI
#define SDMA_RLC6_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_RLC6_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC6_RB_RPTR_ADDR_LO
#define SDMA_RLC6_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_RLC6_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_RLC6_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_RLC6_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_RLC6_IB_CNTL
#define SDMA_RLC6_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC6_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_RLC6_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_RLC6_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_RLC6_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_RLC6_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC6_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_RLC6_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_RLC6_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_RLC6_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_RLC6_IB_RPTR
#define SDMA_RLC6_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_RLC6_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_RLC6_IB_OFFSET
#define SDMA_RLC6_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_RLC6_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_RLC6_IB_BASE_LO
#define SDMA_RLC6_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_RLC6_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_RLC6_IB_BASE_HI
#define SDMA_RLC6_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC6_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC6_IB_SIZE
#define SDMA_RLC6_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_RLC6_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_RLC6_SKIP_CNTL
#define SDMA_RLC6_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_RLC6_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_RLC6_CONTEXT_STATUS
#define SDMA_RLC6_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_RLC6_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_RLC6_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_RLC6_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_RLC6_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_RLC6_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_RLC6_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_RLC6_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_RLC6_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_RLC6_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_RLC6_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_RLC6_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_RLC6_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_RLC6_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_RLC6_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_RLC6_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_RLC6_DOORBELL
#define SDMA_RLC6_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_RLC6_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_RLC6_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_RLC6_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_RLC6_STATUS
#define SDMA_RLC6_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_RLC6_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_RLC6_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_RLC6_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_RLC6_DOORBELL_LOG
#define SDMA_RLC6_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_RLC6_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_RLC6_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_RLC6_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_RLC6_WATERMARK
#define SDMA_RLC6_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_RLC6_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_RLC6_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_RLC6_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_RLC6_DOORBELL_OFFSET
#define SDMA_RLC6_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_RLC6_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_RLC6_CSA_ADDR_LO
#define SDMA_RLC6_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_RLC6_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_RLC6_CSA_ADDR_HI
#define SDMA_RLC6_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_RLC6_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_RLC6_IB_SUB_REMAIN
#define SDMA_RLC6_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_RLC6_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_RLC6_PREEMPT
#define SDMA_RLC6_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_RLC6_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_RLC6_DUMMY_REG
#define SDMA_RLC6_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_RLC6_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC6_RB_WPTR_POLL_ADDR_HI
#define SDMA_RLC6_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_RLC6_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_RLC6_RB_WPTR_POLL_ADDR_LO
#define SDMA_RLC6_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_RLC6_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_RLC6_RB_AQL_CNTL
#define SDMA_RLC6_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_RLC6_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_RLC6_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_RLC6_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_RLC6_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_RLC6_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_RLC6_MINOR_PTR_UPDATE
#define SDMA_RLC6_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_RLC6_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_RLC6_MIDCMD_DATA0
#define SDMA_RLC6_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA1
#define SDMA_RLC6_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA2
#define SDMA_RLC6_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA3
#define SDMA_RLC6_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA4
#define SDMA_RLC6_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA5
#define SDMA_RLC6_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA6
#define SDMA_RLC6_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA7
#define SDMA_RLC6_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA8
#define SDMA_RLC6_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA9
#define SDMA_RLC6_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_RLC6_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_DATA10
#define SDMA_RLC6_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_RLC6_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC6_MIDCMD_CNTL
#define SDMA_RLC6_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_RLC6_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_RLC6_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_RLC6_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_RLC6_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_RLC6_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_RLC6_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_RLC6_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L
//SDMA_RLC7_RB_CNTL
#define SDMA_RLC7_RB_CNTL__RB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC7_RB_CNTL__RB_SIZE__SHIFT                                                                     0x1
#define SDMA_RLC7_RB_CNTL__RB_SWAP_ENABLE__SHIFT                                                              0x9
#define SDMA_RLC7_RB_CNTL__RPTR_WRITEBACK_ENABLE__SHIFT                                                       0xc
#define SDMA_RLC7_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE__SHIFT                                                  0xd
#define SDMA_RLC7_RB_CNTL__RPTR_WRITEBACK_TIMER__SHIFT                                                        0x10
#define SDMA_RLC7_RB_CNTL__RB_PRIV__SHIFT                                                                     0x17
#define SDMA_RLC7_RB_CNTL__RB_VMID__SHIFT                                                                     0x18
#define SDMA_RLC7_RB_CNTL__RB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC7_RB_CNTL__RB_SIZE_MASK                                                                       0x0000003EL
#define SDMA_RLC7_RB_CNTL__RB_SWAP_ENABLE_MASK                                                                0x00000200L
#define SDMA_RLC7_RB_CNTL__RPTR_WRITEBACK_ENABLE_MASK                                                         0x00001000L
#define SDMA_RLC7_RB_CNTL__RPTR_WRITEBACK_SWAP_ENABLE_MASK                                                    0x00002000L
#define SDMA_RLC7_RB_CNTL__RPTR_WRITEBACK_TIMER_MASK                                                          0x001F0000L
#define SDMA_RLC7_RB_CNTL__RB_PRIV_MASK                                                                       0x00800000L
#define SDMA_RLC7_RB_CNTL__RB_VMID_MASK                                                                       0x0F000000L
//SDMA_RLC7_RB_BASE
#define SDMA_RLC7_RB_BASE__ADDR__SHIFT                                                                        0x0
#define SDMA_RLC7_RB_BASE__ADDR_MASK                                                                          0xFFFFFFFFL
//SDMA_RLC7_RB_BASE_HI
#define SDMA_RLC7_RB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC7_RB_BASE_HI__ADDR_MASK                                                                       0x00FFFFFFL
//SDMA_RLC7_RB_RPTR
#define SDMA_RLC7_RB_RPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC7_RB_RPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC7_RB_RPTR_HI
#define SDMA_RLC7_RB_RPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC7_RB_RPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC7_RB_WPTR
#define SDMA_RLC7_RB_WPTR__OFFSET__SHIFT                                                                      0x0
#define SDMA_RLC7_RB_WPTR__OFFSET_MASK                                                                        0xFFFFFFFFL
//SDMA_RLC7_RB_WPTR_HI
#define SDMA_RLC7_RB_WPTR_HI__OFFSET__SHIFT                                                                   0x0
#define SDMA_RLC7_RB_WPTR_HI__OFFSET_MASK                                                                     0xFFFFFFFFL
//SDMA_RLC7_RB_WPTR_POLL_CNTL
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__ENABLE__SHIFT                                                            0x0
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__SWAP_ENABLE__SHIFT                                                       0x1
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE__SHIFT                                                   0x2
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__FREQUENCY__SHIFT                                                         0x4
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT__SHIFT                                                   0x10
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__ENABLE_MASK                                                              0x00000001L
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__SWAP_ENABLE_MASK                                                         0x00000002L
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__F32_POLL_ENABLE_MASK                                                     0x00000004L
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__FREQUENCY_MASK                                                           0x0000FFF0L
#define SDMA_RLC7_RB_WPTR_POLL_CNTL__IDLE_POLL_COUNT_MASK                                                     0xFFFF0000L
//SDMA_RLC7_RB_RPTR_ADDR_HI
#define SDMA_RLC7_RB_RPTR_ADDR_HI__ADDR__SHIFT                                                                0x0
#define SDMA_RLC7_RB_RPTR_ADDR_HI__ADDR_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC7_RB_RPTR_ADDR_LO
#define SDMA_RLC7_RB_RPTR_ADDR_LO__RPTR_WB_IDLE__SHIFT                                                        0x0
#define SDMA_RLC7_RB_RPTR_ADDR_LO__ADDR__SHIFT                                                                0x2
#define SDMA_RLC7_RB_RPTR_ADDR_LO__RPTR_WB_IDLE_MASK                                                          0x00000001L
#define SDMA_RLC7_RB_RPTR_ADDR_LO__ADDR_MASK                                                                  0xFFFFFFFCL
//SDMA_RLC7_IB_CNTL
#define SDMA_RLC7_IB_CNTL__IB_ENABLE__SHIFT                                                                   0x0
#define SDMA_RLC7_IB_CNTL__IB_SWAP_ENABLE__SHIFT                                                              0x4
#define SDMA_RLC7_IB_CNTL__SWITCH_INSIDE_IB__SHIFT                                                            0x8
#define SDMA_RLC7_IB_CNTL__CMD_VMID__SHIFT                                                                    0x10
#define SDMA_RLC7_IB_CNTL__IB_PRIV__SHIFT                                                                     0x1f
#define SDMA_RLC7_IB_CNTL__IB_ENABLE_MASK                                                                     0x00000001L
#define SDMA_RLC7_IB_CNTL__IB_SWAP_ENABLE_MASK                                                                0x00000010L
#define SDMA_RLC7_IB_CNTL__SWITCH_INSIDE_IB_MASK                                                              0x00000100L
#define SDMA_RLC7_IB_CNTL__CMD_VMID_MASK                                                                      0x000F0000L
#define SDMA_RLC7_IB_CNTL__IB_PRIV_MASK                                                                       0x80000000L
//SDMA_RLC7_IB_RPTR
#define SDMA_RLC7_IB_RPTR__OFFSET__SHIFT                                                                      0x2
#define SDMA_RLC7_IB_RPTR__OFFSET_MASK                                                                        0x003FFFFCL
//SDMA_RLC7_IB_OFFSET
#define SDMA_RLC7_IB_OFFSET__OFFSET__SHIFT                                                                    0x2
#define SDMA_RLC7_IB_OFFSET__OFFSET_MASK                                                                      0x003FFFFCL
//SDMA_RLC7_IB_BASE_LO
#define SDMA_RLC7_IB_BASE_LO__ADDR__SHIFT                                                                     0x5
#define SDMA_RLC7_IB_BASE_LO__ADDR_MASK                                                                       0xFFFFFFE0L
//SDMA_RLC7_IB_BASE_HI
#define SDMA_RLC7_IB_BASE_HI__ADDR__SHIFT                                                                     0x0
#define SDMA_RLC7_IB_BASE_HI__ADDR_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC7_IB_SIZE
#define SDMA_RLC7_IB_SIZE__SIZE__SHIFT                                                                        0x0
#define SDMA_RLC7_IB_SIZE__SIZE_MASK                                                                          0x000FFFFFL
//SDMA_RLC7_SKIP_CNTL
#define SDMA_RLC7_SKIP_CNTL__SKIP_COUNT__SHIFT                                                                0x0
#define SDMA_RLC7_SKIP_CNTL__SKIP_COUNT_MASK                                                                  0x000FFFFFL
//SDMA_RLC7_CONTEXT_STATUS
#define SDMA_RLC7_CONTEXT_STATUS__SELECTED__SHIFT                                                             0x0
#define SDMA_RLC7_CONTEXT_STATUS__IDLE__SHIFT                                                                 0x2
#define SDMA_RLC7_CONTEXT_STATUS__EXPIRED__SHIFT                                                              0x3
#define SDMA_RLC7_CONTEXT_STATUS__EXCEPTION__SHIFT                                                            0x4
#define SDMA_RLC7_CONTEXT_STATUS__CTXSW_ABLE__SHIFT                                                           0x7
#define SDMA_RLC7_CONTEXT_STATUS__CTXSW_READY__SHIFT                                                          0x8
#define SDMA_RLC7_CONTEXT_STATUS__PREEMPTED__SHIFT                                                            0x9
#define SDMA_RLC7_CONTEXT_STATUS__PREEMPT_DISABLE__SHIFT                                                      0xa
#define SDMA_RLC7_CONTEXT_STATUS__SELECTED_MASK                                                               0x00000001L
#define SDMA_RLC7_CONTEXT_STATUS__IDLE_MASK                                                                   0x00000004L
#define SDMA_RLC7_CONTEXT_STATUS__EXPIRED_MASK                                                                0x00000008L
#define SDMA_RLC7_CONTEXT_STATUS__EXCEPTION_MASK                                                              0x00000070L
#define SDMA_RLC7_CONTEXT_STATUS__CTXSW_ABLE_MASK                                                             0x00000080L
#define SDMA_RLC7_CONTEXT_STATUS__CTXSW_READY_MASK                                                            0x00000100L
#define SDMA_RLC7_CONTEXT_STATUS__PREEMPTED_MASK                                                              0x00000200L
#define SDMA_RLC7_CONTEXT_STATUS__PREEMPT_DISABLE_MASK                                                        0x00000400L
//SDMA_RLC7_DOORBELL
#define SDMA_RLC7_DOORBELL__ENABLE__SHIFT                                                                     0x1c
#define SDMA_RLC7_DOORBELL__CAPTURED__SHIFT                                                                   0x1e
#define SDMA_RLC7_DOORBELL__ENABLE_MASK                                                                       0x10000000L
#define SDMA_RLC7_DOORBELL__CAPTURED_MASK                                                                     0x40000000L
//SDMA_RLC7_STATUS
#define SDMA_RLC7_STATUS__WPTR_UPDATE_FAIL_COUNT__SHIFT                                                       0x0
#define SDMA_RLC7_STATUS__WPTR_UPDATE_PENDING__SHIFT                                                          0x8
#define SDMA_RLC7_STATUS__WPTR_UPDATE_FAIL_COUNT_MASK                                                         0x000000FFL
#define SDMA_RLC7_STATUS__WPTR_UPDATE_PENDING_MASK                                                            0x00000100L
//SDMA_RLC7_DOORBELL_LOG
#define SDMA_RLC7_DOORBELL_LOG__BE_ERROR__SHIFT                                                               0x0
#define SDMA_RLC7_DOORBELL_LOG__DATA__SHIFT                                                                   0x2
#define SDMA_RLC7_DOORBELL_LOG__BE_ERROR_MASK                                                                 0x00000001L
#define SDMA_RLC7_DOORBELL_LOG__DATA_MASK                                                                     0xFFFFFFFCL
//SDMA_RLC7_WATERMARK
#define SDMA_RLC7_WATERMARK__RD_OUTSTANDING__SHIFT                                                            0x0
#define SDMA_RLC7_WATERMARK__WR_OUTSTANDING__SHIFT                                                            0x10
#define SDMA_RLC7_WATERMARK__RD_OUTSTANDING_MASK                                                              0x00000FFFL
#define SDMA_RLC7_WATERMARK__WR_OUTSTANDING_MASK                                                              0x03FF0000L
//SDMA_RLC7_DOORBELL_OFFSET
#define SDMA_RLC7_DOORBELL_OFFSET__OFFSET__SHIFT                                                              0x2
#define SDMA_RLC7_DOORBELL_OFFSET__OFFSET_MASK                                                                0x0FFFFFFCL
//SDMA_RLC7_CSA_ADDR_LO
#define SDMA_RLC7_CSA_ADDR_LO__ADDR__SHIFT                                                                    0x2
#define SDMA_RLC7_CSA_ADDR_LO__ADDR_MASK                                                                      0xFFFFFFFCL
//SDMA_RLC7_CSA_ADDR_HI
#define SDMA_RLC7_CSA_ADDR_HI__ADDR__SHIFT                                                                    0x0
#define SDMA_RLC7_CSA_ADDR_HI__ADDR_MASK                                                                      0xFFFFFFFFL
//SDMA_RLC7_IB_SUB_REMAIN
#define SDMA_RLC7_IB_SUB_REMAIN__SIZE__SHIFT                                                                  0x0
#define SDMA_RLC7_IB_SUB_REMAIN__SIZE_MASK                                                                    0x000FFFFFL
//SDMA_RLC7_PREEMPT
#define SDMA_RLC7_PREEMPT__IB_PREEMPT__SHIFT                                                                  0x0
#define SDMA_RLC7_PREEMPT__IB_PREEMPT_MASK                                                                    0x00000001L
//SDMA_RLC7_DUMMY_REG
#define SDMA_RLC7_DUMMY_REG__DUMMY__SHIFT                                                                     0x0
#define SDMA_RLC7_DUMMY_REG__DUMMY_MASK                                                                       0xFFFFFFFFL
//SDMA_RLC7_RB_WPTR_POLL_ADDR_HI
#define SDMA_RLC7_RB_WPTR_POLL_ADDR_HI__ADDR__SHIFT                                                           0x0
#define SDMA_RLC7_RB_WPTR_POLL_ADDR_HI__ADDR_MASK                                                             0xFFFFFFFFL
//SDMA_RLC7_RB_WPTR_POLL_ADDR_LO
#define SDMA_RLC7_RB_WPTR_POLL_ADDR_LO__ADDR__SHIFT                                                           0x2
#define SDMA_RLC7_RB_WPTR_POLL_ADDR_LO__ADDR_MASK                                                             0xFFFFFFFCL
//SDMA_RLC7_RB_AQL_CNTL
#define SDMA_RLC7_RB_AQL_CNTL__AQL_ENABLE__SHIFT                                                              0x0
#define SDMA_RLC7_RB_AQL_CNTL__AQL_PACKET_SIZE__SHIFT                                                         0x1
#define SDMA_RLC7_RB_AQL_CNTL__PACKET_STEP__SHIFT                                                             0x8
#define SDMA_RLC7_RB_AQL_CNTL__AQL_ENABLE_MASK                                                                0x00000001L
#define SDMA_RLC7_RB_AQL_CNTL__AQL_PACKET_SIZE_MASK                                                           0x000000FEL
#define SDMA_RLC7_RB_AQL_CNTL__PACKET_STEP_MASK                                                               0x0000FF00L
//SDMA_RLC7_MINOR_PTR_UPDATE
#define SDMA_RLC7_MINOR_PTR_UPDATE__ENABLE__SHIFT                                                             0x0
#define SDMA_RLC7_MINOR_PTR_UPDATE__ENABLE_MASK                                                               0x00000001L
//SDMA_RLC7_MIDCMD_DATA0
#define SDMA_RLC7_MIDCMD_DATA0__DATA0__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA0__DATA0_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA1
#define SDMA_RLC7_MIDCMD_DATA1__DATA1__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA1__DATA1_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA2
#define SDMA_RLC7_MIDCMD_DATA2__DATA2__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA2__DATA2_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA3
#define SDMA_RLC7_MIDCMD_DATA3__DATA3__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA3__DATA3_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA4
#define SDMA_RLC7_MIDCMD_DATA4__DATA4__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA4__DATA4_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA5
#define SDMA_RLC7_MIDCMD_DATA5__DATA5__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA5__DATA5_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA6
#define SDMA_RLC7_MIDCMD_DATA6__DATA6__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA6__DATA6_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA7
#define SDMA_RLC7_MIDCMD_DATA7__DATA7__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA7__DATA7_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA8
#define SDMA_RLC7_MIDCMD_DATA8__DATA8__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA8__DATA8_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA9
#define SDMA_RLC7_MIDCMD_DATA9__DATA9__SHIFT                                                                  0x0
#define SDMA_RLC7_MIDCMD_DATA9__DATA9_MASK                                                                    0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_DATA10
#define SDMA_RLC7_MIDCMD_DATA10__DATA10__SHIFT                                                                0x0
#define SDMA_RLC7_MIDCMD_DATA10__DATA10_MASK                                                                  0xFFFFFFFFL
//SDMA_RLC7_MIDCMD_CNTL
#define SDMA_RLC7_MIDCMD_CNTL__DATA_VALID__SHIFT                                                              0x0
#define SDMA_RLC7_MIDCMD_CNTL__COPY_MODE__SHIFT                                                               0x1
#define SDMA_RLC7_MIDCMD_CNTL__SPLIT_STATE__SHIFT                                                             0x4
#define SDMA_RLC7_MIDCMD_CNTL__ALLOW_PREEMPT__SHIFT                                                           0x8
#define SDMA_RLC7_MIDCMD_CNTL__DATA_VALID_MASK                                                                0x00000001L
#define SDMA_RLC7_MIDCMD_CNTL__COPY_MODE_MASK                                                                 0x00000002L
#define SDMA_RLC7_MIDCMD_CNTL__SPLIT_STATE_MASK                                                               0x000000F0L
#define SDMA_RLC7_MIDCMD_CNTL__ALLOW_PREEMPT_MASK                                                             0x00000100L

#endif

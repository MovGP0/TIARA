/* Ghidra address: 0198d580 */
/* Ghidra symbol: FUN_0198d580 */


void FUN_0198d580(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9,undefined4 param_10)

{
  longlong lVar1;
  
  lVar1 = param_1[0x42];
  *(undefined1 *)(lVar1 + 0x12d) = 1;
  *(undefined4 *)(lVar1 + 0x130) = 20000;
  *(undefined4 *)(lVar1 + 0x134) = 20000;
  *(undefined4 *)(lVar1 + 0x138) = 0xffffb1e0;
  *(undefined4 *)(lVar1 + 0x13c) = 0xffffb1e0;
  (**(code **)(*param_1 + 0x60))
            (param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  lVar1 = param_1[0x42];
  *(undefined1 *)(lVar1 + 0x12d) = 0;
  FUN_00b956d0(param_2,*(undefined4 *)(lVar1 + 0x130),*(undefined4 *)(lVar1 + 0x134),
               *(undefined4 *)(lVar1 + 0x138),*(undefined4 *)(lVar1 + 0x13c));
  return;
}


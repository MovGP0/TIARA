/* Ghidra address: 00bd04d0 */
/* Ghidra symbol: FUN_00bd04d0 */


void FUN_00bd04d0(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (((param_2 == 0) && ((int)param_1[8] == 0)) || (*(uint *)(param_1 + 8) == param_2)) {
    (**(code **)(*param_1 + 0x78))(param_1,param_3);
  }
  else {
    if (*(uint *)(param_1 + 8) <= param_2) {
      FUN_00bceea0(param_2);
    }
    FUN_004b3260(param_1);
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
    lVar1 = param_1[7] + (longlong)(int)param_2 * 0x28;
    *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 4;
    *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) & 0xfe;
    *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) & 0xfd;
    *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 8;
    FUN_00414ad0(lVar1,param_3);
    if (param_1[0x19] != 0) {
      (*(code *)param_1[0x19])(param_1[0x1a],param_1,param_2,1);
    }
    FUN_004b3390(param_1);
  }
  return;
}


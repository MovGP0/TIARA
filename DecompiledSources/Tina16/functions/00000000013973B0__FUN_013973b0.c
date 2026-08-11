/* Ghidra address: 013973b0 */
/* Ghidra symbol: FUN_013973b0 */


undefined8 *
FUN_013973b0(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4,undefined4 param_5
            ,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(longlong *)(param_2 + 0x4c0) != 0) &&
      (cVar1 = FUN_017d1390(*(longlong *)(param_2 + 0x4c0)), cVar1 == '\0')) &&
     (iVar2 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0)), iVar2 == 2)) {
    FUN_017d13d0(param_1,param_2,1,param_3,param_4 & 0xff,param_5,param_6,param_7,param_8);
    return param_1;
  }
  if ((*(longlong *)(param_2 + 0x4c0) != 0) &&
     (iVar2 = FUN_017d1380(*(longlong *)(param_2 + 0x4c0)), iVar2 == 1)) {
    FUN_017d13d0(param_1,param_2,0,param_3,param_4 & 0xff,param_5,param_6,param_7,param_8);
    return param_1;
  }
  uVar3 = FUN_01397060(param_2,param_3,param_4,1,param_5,param_6,param_7,param_8);
  *param_1 = uVar3;
  param_1[1] = 0;
  return param_1;
}


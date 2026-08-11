/* Ghidra address: 013972e0 */
/* Ghidra symbol: FUN_013972e0 */


undefined8
FUN_013972e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38 [2];
  
  if (((*(longlong *)(param_1 + 0x4c0) != 0) &&
      (cVar1 = FUN_017d1390(*(longlong *)(param_1 + 0x4c0)), cVar1 == '\0')) &&
     (iVar2 = FUN_017d1380(*(undefined8 *)(param_1 + 0x4c0)), iVar2 == 2)) {
    FUN_013973b0(local_38,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar3 = FUN_00c44590(local_38);
    return uVar3;
  }
  FUN_013973b0(local_38,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return local_38[0];
}


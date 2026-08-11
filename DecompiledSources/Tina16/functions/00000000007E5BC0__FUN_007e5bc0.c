/* Ghidra address: 007e5bc0 */
/* Ghidra symbol: FUN_007e5bc0 */


undefined4 FUN_007e5bc0(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 unaff_R13;
  
  uVar2 = 0;
  uVar4 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (param_3 != '\0') {
    uVar4 = 0;
  }
  if ((((char)uVar4 == '\x01') && (cVar1 = FUN_004113d0(param_1,&PTR_FUN_007dba80), cVar1 != '\0'))
     && (lVar3 = (**(code **)(*param_1 + 0x90))(param_1), lVar3 == param_2)) {
    uVar2 = FUN_007e8910(param_1);
    return uVar2;
  }
  for (lVar3 = FUN_007e5b00(param_1,param_2,uVar4); (lVar3 != 0 && (*(int *)(lVar3 + 0xac) == 0));
      lVar3 = *(longlong *)(lVar3 + 200)) {
  }
  if (lVar3 != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 0xac);
  }
  return uVar2;
}


/* Ghidra address: 00659250 */
/* Ghidra symbol: FUN_00659250 */


longlong * FUN_00659250(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((*(longlong *)(param_1 + 0x340) == 0) && (*(char *)(param_1 + 0x393) != '\0')) &&
     (*(char *)(param_1 + 0x392) != '\0')) {
    lVar2 = (**(code **)(PTR_PTR_01df5b18 + 0x88))(PTR_PTR_01df5b18,1,param_1);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0xa8;
    }
    uVar3 = FUN_0041b840(param_2,lVar2);
  }
  else {
    uVar3 = FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x340));
  }
  if ((*(char *)(param_1 + 0x478) == '\0') && (*param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  FUN_00659460(param_1,uVar1);
  return param_2;
}


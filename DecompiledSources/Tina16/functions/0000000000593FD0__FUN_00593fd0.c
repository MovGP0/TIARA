/* Ghidra address: 00593fd0 */
/* Ghidra symbol: FUN_00593fd0 */


undefined8 FUN_00593fd0(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  if ((uVar1 < uVar2) || ((uVar1 == uVar2 && (*param_2 < *param_3)))) {
    uVar3 = 0xffffffff;
  }
  else if ((uVar2 < uVar1) || ((uVar1 == uVar2 && (*param_3 < *param_2)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


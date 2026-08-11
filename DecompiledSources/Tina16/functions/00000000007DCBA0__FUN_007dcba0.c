/* Ghidra address: 007dcba0 */
/* Ghidra symbol: FUN_007dcba0 */


undefined4 FUN_007dcba0(longlong param_1,int *param_2,longlong param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  pcVar1 = (code *)*param_4;
  uVar2 = param_4[1];
  uVar3 = 0;
  if (param_3 != 0) {
    while ((((char)uVar3 == '\0' && (iVar4 = FUN_007e2ef0(param_3), *param_2 < iVar4)) &&
           (lVar5 = FUN_007e2f10(param_3,*param_2),
           (int)(uint)*(byte *)(lVar5 + 0x87) <= *(int *)(param_1 + 0x4c)))) {
      uVar3 = (*pcVar1)(uVar2,lVar5);
      *param_2 = *param_2 + 1;
    }
  }
  return uVar3;
}


/* Ghidra address: 004be070 */
/* Ghidra symbol: FUN_004be070 */


void FUN_004be070(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  pcVar1 = (code *)*param_3;
  uVar2 = param_3[1];
  lVar3 = *(longlong *)(param_1 + 0x100);
  if (param_2 == lVar3) {
    bVar5 = true;
  }
  else if ((param_2 == 0) || (lVar3 == 0)) {
    bVar5 = false;
  }
  else {
    iVar4 = FUN_0043e420(param_2,lVar3,param_3,param_4,*param_4,param_4[1]);
    bVar5 = iVar4 == 0;
  }
  if ((bVar5) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(uVar2,param_1);
    FUN_00414480(param_1 + 0x100);
  }
  return;
}


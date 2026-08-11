/* Ghidra address: 0094b8e0 */
/* Ghidra symbol: FUN_0094b8e0 */


void FUN_0094b8e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_2 + 0x170))(param_2);
  if (lVar2 != 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_009014f0,1,L"Inuse node error.");
    FUN_004134c0(uVar3);
  }
  cVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar1 == '\x02') {
    lVar2 = FUN_004113f0(param_2,&PTR_FUN_00909bd0);
    if ((*(longlong *)(lVar2 + 0xa0) != 0) && (*(longlong *)(lVar2 + 0xa0) != param_1)) {
      uVar3 = FUN_0044d490(&PTR_FUN_009014f0,1,L"Inuse attribute error.");
      FUN_004134c0(uVar3);
    }
  }
  return;
}


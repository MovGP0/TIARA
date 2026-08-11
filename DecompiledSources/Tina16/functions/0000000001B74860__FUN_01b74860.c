/* Ghidra address: 01b74860 */
/* Ghidra symbol: FUN_01b74860 */


char FUN_01b74860(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong local_20 [2];
  
  local_20[0] = 0;
  FUN_00414b50(local_20,*param_2);
  do {
    bVar2 = false;
    cVar3 = FUN_0072f4e0(L"Please enter scheme name",L"Scheme name",param_2);
    if (cVar3 == '\0') {
LAB_01b74916:
      bVar2 = true;
    }
    else {
      iVar4 = FUN_00416db0(*param_2,local_20[0]);
      if (iVar4 == 0) goto LAB_01b74916;
      if (*param_2 == 0) {
LAB_01b748f7:
        FUN_0072d440(L"The name is not valid or conflicts with another name.",1,4,0);
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
        iVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,*param_2);
        if (iVar4 != -1) goto LAB_01b748f7;
        bVar2 = true;
      }
    }
    if (bVar2) {
      FUN_00414480(local_20);
      return cVar3;
    }
  } while( true );
}


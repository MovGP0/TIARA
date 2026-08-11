/* Ghidra address: 01770db0 */
/* Ghidra symbol: FUN_01770db0 */


longlong * FUN_01770db0(longlong *param_1,char param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  short *local_20;
  
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = (short *)0x0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  for (iVar3 = 0; iVar1 = (**(code **)(*param_1 + 0x28))(param_1), iVar3 < iVar1; iVar3 = iVar3 + 1)
  {
    (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
    FUN_0043ea00(&local_20,local_30[0]);
    if ((local_20 != (short *)0x0) && (*local_20 != 0x2a)) {
      FUN_0043e130(&local_38,local_20);
      iVar1 = FUN_004170c0(L".SUBCKT",local_38,1);
      if (iVar1 != 0) break;
    }
    (**(code **)(*param_1 + 0x18))(param_1,&local_40,iVar3);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_40);
  }
  if (param_3 != '\0') {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar3 < iVar1) {
      (**(code **)(*param_1 + 0x18))(param_1,&local_50,iVar3);
      FUN_0043e130(&local_48,local_50);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_48);
    }
    while( true ) {
      iVar3 = iVar3 + 1;
      iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
      if (iVar1 <= iVar3) break;
      (**(code **)(*param_1 + 0x18))(param_1,&local_58,iVar3);
      FUN_0043ea00(&local_20,local_58);
      if (((local_20 != (short *)0x0) && (*local_20 != 0x2a)) && (*local_20 != 0x2b)) break;
      (**(code **)(*param_1 + 0x18))(param_1,&local_68,iVar3);
      FUN_0043e130(&local_60,local_68);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_60);
    }
  }
  if (param_2 != '\0') {
    (**(code **)(*plVar2 + 0x78))(plVar2,0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L"* Encrypted macro. Content can\'t be viewed. ");
    (**(code **)(*plVar2 + 0x78))(plVar2,0);
    (**(code **)(*plVar2 + 0x78))(plVar2,L".ENDS");
  }
  FUN_00414560(&local_68,8);
  FUN_00414480(&local_20);
  return plVar2;
}


/* Ghidra address: 01a2c180 */
/* Ghidra symbol: FUN_01a2c180 */


void FUN_01a2c180(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined *local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  FUN_00414b50(&local_48,L"c:\\Attila\\Devel Files\\Projects\\Python\\tesstrain\\Symbols JPG\\");
  iVar5 = 0x15;
  puVar3 = &DAT_01fc63ac;
  ppuVar4 = &PTR_u_voltmet_01fc63c8;
  do {
    plVar1 = (longlong *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
    PTR_DAT_02004010[0x816] = 1;
    PTR_DAT_02004010[0x814] = 0;
    *(undefined1 *)(plVar1 + 0x195) = 1;
    *(undefined1 *)((longlong)plVar1 + 0xca6) = 0;
    *PTR_DAT_02003038 = 0;
    uVar2 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,*puVar3);
    FUN_01d38290(uVar2,1);
    (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
    local_60 = *ppuVar4;
    local_58 = 0x11;
    FUN_00442f70(&local_50,L"%s.jpg",&local_60);
    FUN_00416ba0(local_40,local_48,local_50);
    FUN_01b25a80(plVar1,local_40[0],5);
    uVar2 = (**(code **)*plVar1)(plVar1);
    FUN_00418590(uVar2,&DAT_01984da0);
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_0072d440(L"Symbols saved",2,4,0);
  FUN_00414560(&local_50,3);
  return;
}


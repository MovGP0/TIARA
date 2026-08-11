/* Ghidra address: 01b99360 */
/* Ghidra symbol: FUN_01b99360 */


void FUN_01b99360(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  if (lVar2 != 0) {
    uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
    cVar1 = FUN_01b96a50(param_1,uVar3);
    if (cVar1 == '\0') goto LAB_01b99429;
  }
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x880) + 0x30))(*(longlong **)(param_1 + 0x880),0)
  ;
  FUN_00416cd0(local_20,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_01b99464,L"COMPREGY",L".bak");
  (**(code **)(*plVar4 + 0xd8))(plVar4,local_20[0]);
  *(undefined1 *)(param_1 + 0x8a8) = 0;
  FUN_01b979d0(param_1,0);
  *(undefined1 *)(param_1 + 0x8a8) = 1;
LAB_01b99429:
  FUN_00414480(local_20);
  return;
}


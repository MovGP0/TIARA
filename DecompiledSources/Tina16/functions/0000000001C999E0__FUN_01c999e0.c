/* Ghidra address: 01c999e0 */
/* Ghidra symbol: FUN_01c999e0 */


void FUN_01c999e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [256];
  
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_120 = 0;
  plVar1 = *(longlong **)(param_1 + 0x1258);
  *(undefined4 *)(plVar1 + 0x1d) = 1;
  FUN_00414ad0(plVar1 + 0x20,&DAT_01c99b64);
  FUN_00416cd0(&local_120,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c99b78,plVar1[0x20]);
  FUN_00724380(plVar1,local_120);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(plVar1,&local_130);
    FUN_0043e1a0(&local_128,local_130);
    FUN_00724380(plVar1,local_128);
    FUN_00724270(plVar1,&local_138);
    FUN_00415dd0(&local_140,local_138,0);
    uVar3 = FUN_004425e0(local_118,local_140);
    FUN_00e1e1a0(uVar3);
  }
  FUN_004144d0(&local_140);
  FUN_00414560(&local_138,2);
  FUN_00414560(&local_128,2);
  return;
}


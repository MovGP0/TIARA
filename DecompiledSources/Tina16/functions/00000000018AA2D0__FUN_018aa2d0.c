/* Ghidra address: 018aa2d0 */
/* Ghidra symbol: FUN_018aa2d0 */


void FUN_018aa2d0(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  puVar1 = auStack_68;
  if (*(char *)(param_1 + 0x531) == '\0') {
    local_20 = (longlong *)FUN_00723990(&PTR_FUN_007198a0,1,0);
    *(undefined4 *)(local_20 + 0x1b) = 0xc;
    uVar3 = FUN_0180bfb0();
    FUN_01809b60(uVar3,&local_38,L"clFP3files");
    FUN_00416ba0(local_20 + 0x1c,local_38,L" (*.fp3)|*.fp3");
    cVar2 = (**(code **)(*local_20 + 0xa8))(local_20);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x550) + 0x188))(*(longlong **)(param_1 + 0x550));
      FUN_00724270(local_20,&local_40);
      FUN_018aa470(param_1,local_40);
    }
    FUN_00410f20(local_20);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  return;
}


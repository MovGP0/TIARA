/* Ghidra address: 01071a70 */
/* Ghidra symbol: FUN_01071a70 */


void FUN_01071a70(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  cVar1 = FUN_0105fed0(*(longlong *)(param_1 + 0x748) + 0x18,*(longlong *)(param_1 + 0x748) + 0x88);
  if (cVar1 != '\0') {
    uVar2 = FUN_0105aa90(*(undefined8 *)(param_1 + 0x750),*(undefined8 *)(param_1 + 0x730));
    FUN_0105a9e0(*(undefined8 *)(param_1 + 0x750),uVar2);
    FUN_00414ad0(*(longlong *)(param_1 + 0x748) + 0x20,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x18));
    cVar1 = FUN_0105f390(*(undefined8 *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x750),1);
    if (cVar1 == '\0') {
      FUN_0041ddd0(&local_38,PTR_PTR_02001330);
      local_48 = *(undefined8 *)(param_1 + 0x730);
      local_40 = 0x11;
      FUN_00442f70(local_30,local_38,&local_48,0);
      FUN_0072d440(local_30[0],1,4,0);
    }
    else {
      plVar4 = (longlong *)FUN_007fc180(&PTR_FUN_0106f568,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_01070030(plVar4,*(undefined8 *)(param_1 + 0x748),*(undefined8 *)(param_1 + 0x758));
      iVar3 = (**(code **)(*plVar4 + 0x2d0))(plVar4);
      if (iVar3 == 1) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x748) + 8) = 1;
      }
      FUN_00410f20(plVar4);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}


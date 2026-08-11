/* Ghidra address: 00ed0e70 */
/* Ghidra symbol: FUN_00ed0e70 */


void FUN_00ed0e70(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00414b50(local_20,*(undefined8 *)(param_1 + 0x8d8));
  if (*(char *)(param_1 + 0x901) != '\0') {
    while( true ) {
      iVar3 = 0;
      if (local_20[0] != 0) {
        iVar3 = *(int *)(local_20[0] + -4);
      }
      if (iVar3 < 2) {
        cVar2 = '\0';
      }
      else {
        iVar3 = 0;
        if (local_20[0] != 0) {
          iVar3 = *(int *)(local_20[0] + -4);
        }
        cVar2 = FUN_00ecc050(*(undefined2 *)(local_20[0] + -2 + (longlong)iVar3 * 2));
      }
      if (cVar2 == '\0') break;
      uVar4 = 0;
      if (local_20[0] != 0) {
        uVar4 = *(undefined4 *)(local_20[0] + -4);
      }
      FUN_00416e20(local_20,uVar4,1);
    }
  }
  FUN_00ebd270(local_30,local_20[0]);
  FUN_00414b50(local_20,local_30[0]);
  if (local_20[0] != 0) {
    FUN_0043e130(&local_38,local_20[0]);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x888) + 0xd0))
                      (*(longlong **)(param_1 + 0x888),*(undefined8 *)(param_1 + 0x8d0),local_38);
    if (cVar2 == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x748);
      FUN_00ea9ef0(&local_40,local_20[0]);
      uVar4 = (**(code **)(*(longlong *)plVar1[0x94] + 0x78))((longlong *)plVar1[0x94],local_40);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar4);
      FUN_0043e130(&local_48,local_20[0]);
      FUN_00414ad0(param_1 + 0x8b0,local_48);
      (**(code **)(**(longlong **)(param_1 + 0x888) + 0x18))
                (*(longlong **)(param_1 + 0x888),*(undefined8 *)(param_1 + 0x8d0),
                 *(undefined8 *)(param_1 + 0x8b0),0);
      FUN_00414480(param_1 + 0x8a8);
      FUN_00eccc30(param_1);
      FUN_00ecbca0(param_1);
      plVar1 = *(longlong **)(param_1 + 0x858);
      uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x48))((longlong *)plVar1[0x9e],uVar4,1);
    }
    else {
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_58,0x846);
      local_68 = local_20[0];
      local_60 = 0x11;
      FUN_00442f70(&local_50,local_58,&local_68,0);
      FUN_0072d440(local_50,1,4,0);
    }
  }
  FUN_00414560(&local_58,6);
  FUN_00414480(local_20);
  return;
}


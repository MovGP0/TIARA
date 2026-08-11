/* Ghidra address: 0152fed0 */
/* Ghidra symbol: FUN_0152fed0 */


void FUN_0152fed0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_58 = 0;
  local_60 = 0;
  local_38 = 0;
  local_50 = 0;
  local_30[0] = 0;
  local_20 = 0;
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_007d94d0);
  if (cVar2 != '\0') {
    iVar3 = FUN_004170c0(L"mnMRU_File",*(undefined8 *)(param_2 + 0x10),1);
    if (iVar3 == 1) {
      FUN_00414b50(&local_20,*(undefined8 *)(param_2 + 0x10));
      FUN_00416e20(&local_20,1,10);
      iVar3 = FUN_0043fc50(local_20,1);
      (**(code **)(*DAT_01f5fc98 + 0x18))(DAT_01f5fc98,&local_20,iVar3 + -1);
      cVar2 = FUN_0152fa50(param_1,param_2);
      if (cVar2 != '\0') {
        cVar2 = FUN_00440a20(local_20,1);
        if (cVar2 == '\0') {
          uVar4 = FUN_00b89270();
          FUN_00b8e520(uVar4,&local_60,0x593);
          local_48 = local_20;
          local_40 = 0x11;
          FUN_00442f70(&local_58,local_60,&local_48,0);
          FUN_016fd940(local_58);
          (**(code **)(*DAT_01f5fc98 + 0x98))(DAT_01f5fc98,iVar3 + -1);
          FUN_01530510(param_1);
        }
        else {
          FUN_0043e1a0(local_30,local_20);
          FUN_00414ad0(param_1 + 0x968,local_30[0]);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x958) + 0x4e8);
          (**(code **)(*plVar1 + 0xd8))(plVar1,*(undefined8 *)(param_1 + 0x968));
          FUN_00c0dad0(*(undefined8 *)(param_1 + 0x958),0);
          *(undefined1 *)(param_1 + 0x1c49) = 1;
          FUN_00441920(&local_50,*(undefined8 *)(param_1 + 0x968));
          local_48 = local_50;
          local_40 = 0x11;
          FUN_00442f70(&local_38,*(undefined8 *)(param_1 + 0x970),&local_48,0);
          FUN_0064de00(param_1,local_38);
          FUN_019953b0(*(undefined8 *)(param_1 + 0x1c28));
          FUN_00414ad0(*(longlong *)(param_1 + 0x1c28) + 0x360,*(undefined8 *)(param_1 + 0x968));
          FUN_0064de00(*(undefined8 *)(param_1 + 0x920),0);
          FUN_01d0e500();
          FUN_00417c40(param_1 + 0x12c0,PTR_DAT_02004010,&DAT_01d0d0b8);
          (**(code **)(**(longlong **)(param_1 + 0x930) + 0x278))(*(longlong **)(param_1 + 0x930));
          FUN_01530440(param_1,*(undefined8 *)(param_1 + 0x968));
        }
      }
    }
  }
  FUN_00414560(&local_60,3);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}


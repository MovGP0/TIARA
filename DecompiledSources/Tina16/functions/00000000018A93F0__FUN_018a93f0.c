/* Ghidra address: 018a93f0 */
/* Ghidra symbol: FUN_018a93f0 */


void FUN_018a93f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_30 = param_2;
  iVar3 = (**(code **)(*(longlong *)param_2[0x10] + 0x30))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar4 = (**(code **)(*(longlong *)local_30[0x10] + 0x20))((longlong *)local_30[0x10],iVar5);
      FUN_018a93f0(param_1,uVar4);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*local_30 + 0xf8))(local_30,0);
  cVar2 = FUN_004113d0(local_30,&PTR_FUN_01921f40);
  if ((cVar2 != '\0') && (lVar1 = local_30[0x41], lVar1 != 0)) {
    if (*(char *)(lVar1 + 8) == '\x02') {
      iVar3 = FUN_0043fc00(*(undefined8 *)(lVar1 + 0x30));
      FUN_0043f750(&local_28,iVar3 + *(int *)(param_1 + 0x5c));
      FUN_00414ad0(lVar1 + 0x30,local_28);
    }
    else if ((byte)(*(char *)(lVar1 + 8) - 3U) < 2) {
      FUN_00414480(lVar1 + 0x18);
      FUN_00414480(lVar1 + 0x28);
      FUN_00414480(lVar1 + 0x20);
      iVar3 = FUN_018a92d0(auStack_58,*(undefined8 *)(lVar1 + 0x30));
      if (iVar3 < 1) {
        *(undefined1 *)(lVar1 + 8) = 0;
        FUN_00414480(lVar1 + 0x30);
      }
      else {
        *(undefined1 *)(lVar1 + 8) = 2;
        FUN_0043f750(&local_20,iVar3);
        FUN_00414ad0(lVar1 + 0x30,local_20);
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}


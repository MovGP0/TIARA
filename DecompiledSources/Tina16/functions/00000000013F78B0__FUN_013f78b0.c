/* Ghidra address: 013f78b0 */
/* Ghidra symbol: FUN_013f78b0 */


void FUN_013f78b0(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414ad0(param_1 + 0x780,L"noname.psg");
  *(undefined1 *)(param_1 + 0x741) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x2d0))
            (*(longlong **)(param_1 + 0x728),*(undefined4 *)(param_1 + 0x730),param_1 + 0x738);
  puVar1 = *(undefined1 **)(param_1 + 0x738);
  *(undefined1 *)(param_1 + 0x748) = *puVar1;
  *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(puVar1 + 0x18);
  uVar3 = FUN_01d3aa60(0,&PTR_FUN_01d35400,5,2);
  *(undefined8 *)(param_1 + 0x750) = uVar3;
  FUN_01d3bb20(uVar3,*(undefined8 *)(puVar1 + 8));
  *(undefined8 *)(param_1 + 0x758) = 0;
  iVar4 = 0;
  do {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_20,iVar4 + 0x460);
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x78))(*(longlong **)(param_1 + 0x768),local_20)
    ;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x4e0) + 2;
  *(int *)(param_1 + 0x778) = iVar4;
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6e0),iVar4);
  FUN_013f76a0(param_1);
  FUN_013f7aa0(param_1);
  lVar2 = *(longlong *)(param_1 + 0x738);
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
            (*(longlong **)(param_1 + 0x710),*(int *)(lVar2 + 0x18) != 0);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x718),*(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x20));
  *(undefined1 *)(param_1 + 0x741) = 1;
  FUN_0064cf60(param_1,0x40a);
  FUN_00414480(&local_20);
  return;
}


/* Ghidra address: 01ad3f00 */
/* Ghidra symbol: FUN_01ad3f00 */


void FUN_01ad3f00(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if ((char)plVar1[2] == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(*(longlong *)(param_1 + 0xb8) + 0x10) != '\0') {
    uVar2 = FUN_013d1bb0(*(longlong *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3,param_4);
    FUN_01ae7390(param_1,L"LeftMargin",uVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if ((char)plVar1[2] == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80));
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if ((char)plVar1[2] == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x10) != '\0') {
    uVar2 = FUN_013d1bb0(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3,param_4);
    FUN_01ae7390(param_1,L"RightMargin",uVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if ((char)plVar1[2] == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80));
  }
  plVar1 = *(longlong **)(param_1 + 200);
  if ((char)plVar1[2] == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(*(longlong *)(param_1 + 200) + 0x10) != '\0') {
    uVar2 = FUN_013d1bb0(*(longlong *)(param_1 + 200),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3,param_4);
    FUN_01ae7390(param_1,L"TopMargin",uVar2);
  }
  plVar1 = *(longlong **)(param_1 + 200);
  if ((char)plVar1[2] == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80));
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if ((char)plVar1[2] == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80));
  }
  if (*(char *)(*(longlong *)(param_1 + 0xd0) + 0x10) != '\0') {
    uVar2 = FUN_013d1bb0(*(longlong *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x80),param_2,
                         param_3,param_4);
    FUN_01ae7390(param_1,L"BottomMargin",uVar2);
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if ((char)plVar1[2] == '\0') {
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x80));
  }
  return;
}


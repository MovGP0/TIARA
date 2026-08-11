/* Ghidra address: 01550d60 */
/* Ghidra symbol: FUN_01550d60 */


void FUN_01550d60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"use ieee.std_logic_1164.all;");
  if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x94c) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"use ieee.std_logic_arith.all;");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
    (**(code **)(*plVar1 + 0x78))(plVar1,L"use std.textio.all;");
  }
  if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x94e) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x94c) == '\0') {
      FUN_00414b50(param_1 + 0x78,L"use tina.primitives.all;");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x78));
      FUN_00414b50(param_1 + 0x78,L"use tina.primitives_not_synth.all;");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x78));
      FUN_00414b50(param_1 + 0x78,L"use tina.primitives_vendor_lib.all;");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x78));
    }
  }
  else {
    cVar2 = FUN_015696c0(*(undefined8 *)(param_1 + 0xb0));
    if ((cVar2 != '\0') || (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x7bb) != '\0')) {
      FUN_00414b50(param_1 + 0x78,L"use work.primitives.all;");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x78));
      *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x7bb) = 1;
    }
  }
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x10) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x10);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,iVar4);
      FUN_00416cd0(&local_40,3,L"use ",local_48,L".all;");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x8f8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_40);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_48,4);
  return;
}


/* Ghidra address: 0163e150 */
/* Ghidra symbol: FUN_0163e150 */


void FUN_0163e150(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  uVar3 = (**(code **)(*param_2 + 0xf8))(param_2);
  (**(code **)(*param_2 + 0x288))(param_2,&local_20);
  if (param_3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),param_2);
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x60),param_2);
  if (*(char *)(param_1 + 0x139e0) == '\0') {
    cVar1 = FUN_01628130(uVar3);
    if (cVar1 != '\0') goto LAB_0163e1f4;
    uVar2 = 0;
  }
  else {
LAB_0163e1f4:
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0x139e0) = uVar2;
  if (*(char *)(param_1 + 0x139e1) == '\0') {
    cVar1 = FUN_01628130(uVar3);
    if (cVar1 != '\0') {
      uVar2 = 0;
      goto LAB_0163e21a;
    }
  }
  uVar2 = 1;
LAB_0163e21a:
  *(undefined1 *)(param_1 + 0x139e1) = uVar2;
  FUN_0043f750(&local_30,*(undefined4 *)(param_1 + 0xa4));
  FUN_00416cd0(param_2 + 0xb1,3,*(undefined8 *)(param_1 + 0x139b0),L".Comp",local_30);
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  FUN_00414560(&local_30,3);
  return;
}


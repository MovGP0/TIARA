/* Ghidra address: 00b64450 */
/* Ghidra symbol: FUN_00b64450 */


void FUN_00b64450(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined1 local_30;
  undefined1 local_2f;
  longlong local_28;
  longlong local_20 [2];
  
  local_40 = 0;
  local_20[0] = 0;
  local_28 = 0;
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       param_2);
  FUN_00414be0(local_20,*(undefined8 *)(lVar3 + 0x38));
  local_2f = 0;
  if (local_20[0] != 0) {
    local_2f = (undefined1)(*(uint *)(local_20[0] + -4) >> 1);
  }
  FUN_00b15100(&local_28,local_20[0]);
  local_30 = 1;
  FUN_00414ff0(local_38,&local_30);
  FUN_00415110(local_38,&LAB_00b64630,2);
  FUN_004154b0(&local_40,local_38,0);
  FUN_004156b0(&local_28,local_40,local_28);
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       param_2);
  cVar1 = *(char *)(lVar3 + 0x80);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x85);
  uVar2 = 0;
  if (local_28 != 0) {
    uVar2 = *(undefined4 *)(local_28 + -4);
  }
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
               CONCAT22((short)((uint)uVar2 >> 0x10),(short)uVar2 + 6));
  FUN_004aedb0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x68),param_2,
               (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x30));
  FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),0);
  FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),cVar1 == '\0');
  uVar4 = FUN_00414df0(&local_28);
  uVar2 = 0;
  if (local_28 != 0) {
    uVar2 = *(undefined4 *)(local_28 + -4);
  }
  FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),uVar4,uVar2);
  FUN_004144d0(&local_40);
  FUN_004144d0(&local_28);
  FUN_00414520(local_20);
  return;
}


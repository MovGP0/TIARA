/* Ghidra address: 005b78a0 */
/* Ghidra symbol: FUN_005b78a0 */


void FUN_005b78a0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ushort uVar5;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8);
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = *(longlong *)(lVar1 + -8);
  }
  if ((longlong)*(int *)(param_1 + 0x30) <= lVar3 + -1) {
    if ((*(char *)(param_1 + 0x57) != '\0') &&
       (*(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1, 0x1e < *(int *)(param_1 + 0x2c))) {
      FUN_005b77f0(param_1);
    }
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + (longlong)*(int *)(param_1 + 0x30) * 0x18)
         = *(undefined1 *)(param_1 + 0x57);
    *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 1 +
             (longlong)*(int *)(param_1 + 0x30) * 0x18) = param_2;
    if (param_2 == '\0') {
      uVar5 = *(ushort *)(param_1 + 0x2a);
      if ((ushort)(uVar5 - 0x61) < 0x1a) {
        uVar5 = uVar5 & 0xffdf;
      }
      *(ushort *)
       (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 8 +
       (longlong)*(int *)(param_1 + 0x30) * 0x18) = uVar5;
    }
    else if (param_2 == '\x02') {
      *(undefined1 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 8 +
       (longlong)*(int *)(param_1 + 0x30) * 0x18) = *(undefined1 *)(param_1 + 0x56);
      uVar4 = FUN_004095c0(0x20);
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x10 +
       (longlong)*(int *)(param_1 + 0x30) * 0x18) = uVar4;
      puVar2 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x10 +
                (longlong)*(int *)(param_1 + 0x30) * 0x18);
      *puVar2 = *(undefined8 *)(param_1 + 0x36);
      puVar2[1] = *(undefined8 *)(param_1 + 0x3e);
      puVar2[2] = *(undefined8 *)(param_1 + 0x46);
      puVar2[3] = *(undefined8 *)(param_1 + 0x4e);
    }
    else if (param_2 == '\x03') {
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 8 +
       (longlong)*(int *)(param_1 + 0x30) * 0x18) = *(undefined2 *)(param_1 + 0x28);
      *(undefined2 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 10 +
       (longlong)*(int *)(param_1 + 0x30) * 0x18) = *(undefined2 *)(param_1 + 0x26);
    }
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_005b7870(param_1);
  return;
}


/* Ghidra address: 00606200 */
/* Ghidra symbol: FUN_00606200 */


undefined8 FUN_00606200(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined2 local_42c;
  undefined2 local_42a;
  undefined1 local_428 [1032];
  
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    if (*(longlong *)(lVar1 + 0x20) == 0) {
      uVar2 = thunk_FUN_04004228(*(undefined8 *)(lVar1 + 0x10),0,0);
      if (uVar2 == 0) {
        return 0;
      }
      if (0x100 < (int)uVar2) {
        uVar2 = uVar2 & 0xff;
      }
      FUN_005fb100(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20));
      local_42c = 0x300;
      local_42a = (undefined2)uVar2;
      thunk_FUN_04004228(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10),uVar2,local_428);
      uVar3 = thunk_FUN_04123694(&local_42c);
      *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20) = uVar3;
    }
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20);
  }
  return uVar3;
}


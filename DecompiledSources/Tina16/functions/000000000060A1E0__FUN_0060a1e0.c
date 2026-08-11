/* Ghidra address: 0060a1e0 */
/* Ghidra symbol: FUN_0060a1e0 */


void FUN_0060a1e0(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  if (*(short *)(*(longlong *)(param_1 + 0x60) + 0x6e) == 0x20) {
    if (1 < *(int *)(*(longlong *)(param_1 + 0x60) + 8)) {
      lVar1 = *(longlong *)(param_1 + 0x60);
      FUN_0060a460(param_1);
      FUN_00608f90(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),lVar1 + 0x40)
      ;
    }
    puVar4 = *(undefined1 **)(*(longlong *)(param_1 + 0x60) + 0x58);
    if (puVar4 != (undefined1 *)0x0) {
      for (; puVar4 < (undefined1 *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x58) +
                      (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x60) + 0x74));
          puVar4 = puVar4 + 4) {
        if (puVar4[3] == '\0') {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
        }
        else {
          uVar3 = puVar4[3];
          uVar2 = thunk_FUN_03f3ed25(*puVar4,0xff,uVar3);
          *puVar4 = uVar2;
          uVar2 = thunk_FUN_03f3ed25(puVar4[1],0xff,uVar3);
          puVar4[1] = uVar2;
          uVar3 = thunk_FUN_03f3ed25(puVar4[2],0xff,uVar3);
          puVar4[2] = uVar3;
        }
      }
    }
  }
  return;
}


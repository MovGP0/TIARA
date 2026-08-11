/* Ghidra address: 01be8880 */
/* Ghidra symbol: FUN_01be8880 */


void FUN_01be8880(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_28;
  char local_1d;
  int local_1c;
  
  local_40 = auStack_68;
  if ((*(char *)(param_1 + 0x670) == '\0') && (*(longlong *)(param_1 + 0x5a0) != 0)) {
    *(undefined1 *)(param_1 + 0x670) = 1;
    local_28 = *(undefined8 *)(param_1 + 0x5a0);
    local_1d = '\0';
    iVar1 = FUN_007ff9d0();
    local_1c = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = FUN_007ffa40(local_28,local_1c);
        if (*(char *)(lVar2 + 0x4d2) == '\x02') {
          local_1d = '\x01';
          uVar3 = FUN_007ffa40(local_28,local_1c);
          FUN_01be9300(param_1,uVar3);
          break;
        }
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (local_1d == '\0') {
      FUN_01be93f0(param_1);
    }
    *(undefined1 *)(param_1 + 0x670) = 0;
  }
  return;
}


/* Ghidra address: 00bfe5c0 */
/* Ghidra symbol: FUN_00bfe5c0 */


void FUN_00bfe5c0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 *local_10;
  
  local_10 = auStack_48;
  local_20 = 0;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x18) = 1;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_039bb6fb(uVar3);
    if (iVar2 != 0) {
      FUN_004167d0(&local_18,*(undefined8 *)(param_2 + 0x10));
      FUN_00bfcc30(param_1,local_18);
      goto code_r0x00bfe66e;
    }
  }
  FUN_004167a0(&local_20,*(undefined8 *)(param_2 + 0x10));
  FUN_00bfcc30(param_1,local_20);
code_r0x00bfe66e:
  FUN_00414560(&local_20,2);
  return;
}


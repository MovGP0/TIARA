/* Ghidra address: 006dc330 */
/* Ghidra symbol: FUN_006dc330 */


void FUN_006dc330(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_38 [40];
  
  *(undefined1 *)(param_1 + 0x4a1) = 0;
  uVar1 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x4b0));
  uVar2 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x4b4));
  FUN_006dc150(auStack_38,uVar1,uVar2);
  pcVar3 = (code *)FUN_00411550(param_1,0xffa8);
  (*pcVar3)(param_1);
  return;
}


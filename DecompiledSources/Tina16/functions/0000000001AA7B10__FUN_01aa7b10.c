/* Ghidra address: 01aa7b10 */
/* Ghidra symbol: FUN_01aa7b10 */


undefined2 FUN_01aa7b10(longlong param_1,char param_2)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  undefined1 *puVar5;
  undefined2 local_5c [2];
  undefined1 local_58 [40];
  
  FUN_0040d200(local_58,0x20,0);
  sVar2 = FUN_013a5960(*(undefined8 *)(param_1 + 0x550));
  sVar4 = 1;
  if (sVar2 != 0) {
    puVar5 = local_58;
    do {
      if (param_2 == '\0') {
        iVar3 = FUN_013a58f0(*(undefined8 *)(param_1 + 0x550),sVar4);
        uVar1 = FUN_01aa0b70(*(undefined1 *)(param_1 + 0x587 + (longlong)iVar3));
        *puVar5 = uVar1;
      }
      else {
        iVar3 = FUN_013a58f0(*(undefined8 *)(param_1 + 0x550),sVar4);
        uVar1 = FUN_01aa0b70(*(undefined1 *)(param_1 + 0x567 + (longlong)iVar3));
        *puVar5 = uVar1;
      }
      sVar4 = sVar4 + 1;
      puVar5 = puVar5 + 1;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  FUN_01aa0bf0(local_5c,local_58);
  return local_5c[0];
}


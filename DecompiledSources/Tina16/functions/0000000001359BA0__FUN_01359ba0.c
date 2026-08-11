/* Ghidra address: 01359ba0 */
/* Ghidra symbol: FUN_01359ba0 */


void FUN_01359ba0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01c746c0(*(undefined8 *)PTR_DAT_02004e40);
  FUN_01359af0(&local_28,param_1,0x10);
  uVar3 = FUN_0198d430(param_1);
  FUN_01a98210(uVar3,local_38);
  iVar1 = FUN_00b95910(&local_28);
  iVar2 = FUN_00b95910(local_38);
  if (iVar1 <= iVar2) {
    iVar1 = FUN_00b95930(&local_28);
    iVar2 = FUN_00b95930(local_38);
    if (iVar1 <= iVar2) {
      return;
    }
  }
  FUN_01c750d0(*(undefined8 *)PTR_DAT_02004e40,local_28,local_24,local_20,local_1c);
  return;
}


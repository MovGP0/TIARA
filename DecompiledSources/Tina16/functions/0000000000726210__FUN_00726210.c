/* Ghidra address: 00726210 */
/* Ghidra symbol: FUN_00726210 */


undefined8 FUN_00726210(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [40];
  
  if (param_2 == 2) {
    lVar1 = FUN_0080f3b0(*(undefined8 *)PTR_DAT_02004030);
    if (lVar1 == param_1) {
      FUN_0080f3f0(*(undefined8 *)PTR_DAT_02004030,0);
    }
  }
  else {
    if (param_2 == 0x82) {
      uVar2 = FUN_007261c0(auStack_38);
      thunk_FUN_03977e83(param_1,DAT_01e050f8);
      return uVar2;
    }
    if (param_2 == 0x86) {
      if (param_3 == 0) {
        lVar1 = FUN_0080f3b0(*(undefined8 *)PTR_DAT_02004030);
        if (lVar1 == param_1) {
          FUN_0080f3f0(*(undefined8 *)PTR_DAT_02004030,0);
        }
      }
      else {
        lVar1 = FUN_0080f3b0(*(undefined8 *)PTR_DAT_02004030);
        if (lVar1 == 0) {
          FUN_0080f3f0(*(undefined8 *)PTR_DAT_02004030,param_1);
        }
      }
    }
  }
  uVar2 = FUN_007261c0(auStack_38);
  return uVar2;
}


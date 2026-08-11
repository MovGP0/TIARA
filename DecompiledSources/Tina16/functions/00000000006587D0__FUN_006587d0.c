/* Ghidra address: 006587d0 */
/* Ghidra symbol: FUN_006587d0 */


void FUN_006587d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  short sVar4;
  undefined8 local_40 [2];
  undefined1 local_30 [16];
  
  if (*(longlong *)(param_2 + 8) == param_1[0x8d]) {
    if (*(short *)(param_2 + 0x10) == -2) {
      if ((*(short *)(param_2 + 0x12) == 0x201) &&
         (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0) != 0)) {
        lVar1 = thunk_FUN_040c88fd();
        lVar3 = thunk_FUN_041620f3(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
        if (lVar1 != lVar3) {
          FUN_0080c2c0(*(undefined8 *)PTR_DAT_02004030);
        }
      }
    }
    else if (*(short *)(param_2 + 0x10) == 1) {
      sVar4 = *(short *)(*(longlong *)PTR_DAT_02005950 + 0x9c);
      if (sVar4 == 0) {
        thunk_FUN_03cc0d62(local_30);
        local_40[0] = FUN_0064d3a0(param_1,local_30);
        lVar1 = FUN_00656230(param_1,local_40,0,0,0);
        if (lVar1 != 0) {
          if ((*(ushort *)(lVar1 + 0x34) & 0x10) == 0) {
            sVar4 = *(short *)(lVar1 + 0xe0);
          }
          else {
            sVar4 = -2;
          }
        }
        if (sVar4 == 0) {
          if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
            sVar4 = (short)param_1[0x1c];
          }
          else {
            sVar4 = -2;
          }
        }
      }
      if (sVar4 != 0) {
        uVar2 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,(longlong)sVar4);
        thunk_FUN_04176eb1(uVar2);
        *(undefined8 *)(param_2 + 0x18) = 1;
        return;
      }
    }
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}


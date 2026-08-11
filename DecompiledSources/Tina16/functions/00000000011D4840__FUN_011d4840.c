/* Ghidra address: 011d4840 */
/* Ghidra symbol: FUN_011d4840 */


void FUN_011d4840(longlong *param_1)

{
  DAT_02107680 = 0;
  DAT_02107670 = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x71c);
  DAT_02107674 = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x718);
  (**(code **)(*param_1 + 0x118))(param_1,0);
  (**(code **)(*(longlong *)param_1[0xdd] + 0x128))((longlong *)param_1[0xdd],1);
  (**(code **)(*(longlong *)param_1[0xdf] + 0x128))((longlong *)param_1[0xdf],1);
  FUN_0064dbe0(param_1[0xde],1);
  (**(code **)(*(longlong *)param_1[0xe2] + 0x128))((longlong *)param_1[0xe2],0);
  (**(code **)(*(longlong *)param_1[0xe3] + 0x128))((longlong *)param_1[0xe3],0);
  (**(code **)(*(longlong *)param_1[0xe4] + 0x128))((longlong *)param_1[0xe4],0);
  (**(code **)(*(longlong *)param_1[0xe9] + 0x268))((longlong *)param_1[0xe9],1);
  (**(code **)(*(longlong *)param_1[0xea] + 0x268))((longlong *)param_1[0xea],0);
  (**(code **)(*(longlong *)param_1[0xeb] + 0x268))((longlong *)param_1[0xeb],0);
  (**(code **)(*(longlong *)param_1[0xec] + 0x268))((longlong *)param_1[0xec],0);
  *(undefined4 *)PTR_DAT_02004708 = 5000;
  return;
}


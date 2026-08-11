/* Ghidra address: 01d3e360 */
/* Ghidra symbol: FUN_01d3e360 */


undefined4 FUN_01d3e360(longlong *param_1,ulonglong param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 unaff_R13;
  longlong local_38;
  undefined2 local_2a;
  
  FUN_01d3d920(param_1,0xe,0,&local_2a);
  cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,local_2a,&local_38);
  if (cVar1 == '\x0e') {
    if (param_3 == 1) {
      unaff_R13 = *(undefined8 *)(local_38 + 8);
    }
    else {
      unaff_R13 = *(undefined8 *)(local_38 + 0x10);
    }
  }
  puVar2 = (undefined4 *)
           FUN_01d3c000(unaff_R13,
                        CONCAT62((int6)((param_2 & 0xffffffff) >> 0x10),
                                 (short)(param_2 & 0xffffffff) + -1));
  return *puVar2;
}


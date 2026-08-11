/* Ghidra address: 006e1220 */
/* Ghidra symbol: FUN_006e1220 */


void FUN_006e1220(longlong param_1,uint param_2)

{
  char cVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x550));
  *(undefined8 *)(param_1 + 0x550) = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x570));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x568));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6d8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x520));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4c0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x500));
  FUN_004d62f0(*(undefined8 *)(param_1 + 0x4b0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4e0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x540));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x498));
  *(undefined8 *)(param_1 + 0x498) = 0;
  if (*(longlong *)(param_1 + 0x590) != 0) {
    cVar1 = FUN_0045aee0(*(longlong *)(param_1 + 0x590));
    if (cVar1 == '\0') {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x590));
    }
  }
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


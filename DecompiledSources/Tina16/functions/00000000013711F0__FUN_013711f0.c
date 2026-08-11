/* Ghidra address: 013711f0 */
/* Ghidra symbol: FUN_013711f0 */


undefined8 FUN_013711f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 unaff_XMM6_Qa;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if ((sVar2 == 6) || (sVar2 == 0x22)) {
      unaff_XMM6_Qa = *(undefined8 *)(param_1 + 0x6a8);
    }
    else {
      unaff_XMM6_Qa = *(undefined8 *)(PTR_DAT_02004010 + 0xe0);
    }
  }
  return unaff_XMM6_Qa;
}


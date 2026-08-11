/* Ghidra address: 01b3b3e0 */
/* Ghidra symbol: FUN_01b3b3e0 */


undefined8 FUN_01b3b3e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 unaff_XMM6_Qa;
  undefined1 local_19;
  
  puVar1 = (undefined8 *)FUN_01cfde70();
  if (local_19 < 0x10) {
    bVar2 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (local_19 & 0x1f) & 0x148U) != 0
    ;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    unaff_XMM6_Qa = *puVar1;
  }
  return unaff_XMM6_Qa;
}


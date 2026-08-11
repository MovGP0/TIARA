/* Ghidra address: 00df1350 */
/* Ghidra symbol: FUN_00df1350 */


void FUN_00df1350(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  double *local_50 [7];
  
  uVar3 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar2 = CONCAT11(uVar3,2);
    cVar1 = FUN_016eacf0(param_1,3,uVar2);
    uVar3 = (undefined1)((ushort)uVar2 >> 8);
  }
  if (cVar1 == '\0') {
    unaff_XMM6_Qa = (double)FUN_016eb0a0(param_1,1);
    uVar4 = FUN_016eb0a0(param_1,2);
    unaff_XMM7_Qa = (double)FUN_00b90620(0x3eb0c6f7a0b5ed8d,uVar4);
    unaff_XMM8_Qa = (unaff_XMM6_Qa * unaff_XMM6_Qa) / unaff_XMM7_Qa;
  }
  else if (cVar1 == '\x01') {
    unaff_XMM8_Qa = 1000000000.0;
  }
  FUN_016e9e20(param_1,1);
  FUN_016e9f40(param_1,FUN_00df1190);
  FUN_016ebe60(param_1,1,CONCAT11(uVar3,1),2,0);
  FUN_016ee260(param_1,local_50,0x88,0);
  *local_50[0] = unaff_XMM8_Qa;
  local_50[0][6] = unaff_XMM6_Qa;
  local_50[0][0xb] = unaff_XMM7_Qa;
  *(char *)(local_50[0] + 0xc) = cVar1;
  *PTR_DAT_02003fd8 = 1;
  return;
}


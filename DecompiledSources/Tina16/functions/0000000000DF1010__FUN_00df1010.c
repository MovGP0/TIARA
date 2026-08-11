/* Ghidra address: 00df1010 */
/* Ghidra symbol: FUN_00df1010 */


void FUN_00df1010(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  double dVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  double unaff_XMM6_Qa;
  double unaff_XMM7_Qa;
  double unaff_XMM8_Qa;
  double *local_50 [7];
  
  uVar4 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar3 = CONCAT11(uVar4,3);
    cVar1 = FUN_016eacf0(param_1,3,uVar3);
    uVar4 = (undefined1)((ushort)uVar3 >> 8);
  }
  if (cVar1 == '\0') {
    unaff_XMM6_Qa = (double)FUN_016eb0a0(param_1,1);
    uVar5 = FUN_016eb0a0(param_1,2);
    unaff_XMM7_Qa = (double)FUN_00b90620(0x3eb0c6f7a0b5ed8d,uVar5);
    unaff_XMM8_Qa = (unaff_XMM6_Qa * unaff_XMM6_Qa) / unaff_XMM7_Qa;
  }
  else if (cVar1 == '\x01') {
    unaff_XMM8_Qa = 1000000000.0;
  }
  else if (cVar1 == '\x02') {
    unaff_XMM8_Qa = 1e-06;
  }
  FUN_016e9e20(param_1,1);
  FUN_016e9f40(param_1,FUN_00df0df0);
  FUN_016ebe60(param_1,1,CONCAT11(uVar4,1),2,0);
  FUN_016ee260(param_1,local_50,0x88,0);
  *local_50[0] = unaff_XMM8_Qa;
  local_50[0][6] = unaff_XMM6_Qa;
  local_50[0][0xb] = unaff_XMM7_Qa;
  *(char *)(local_50[0] + 0xc) = cVar1;
  *PTR_DAT_02003fd8 = 1;
  dVar2 = (double)FUN_00409570(4000);
  local_50[0][0xd] = dVar2;
  dVar2 = (double)FUN_00409570(4000);
  local_50[0][0xe] = dVar2;
  FUN_016e9f50(param_1,FUN_00df0ff0);
  return;
}


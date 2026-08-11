/* Ghidra address: 0172e0a0 */
/* Ghidra symbol: FUN_0172e0a0 */


ulonglong FUN_0172e0a0(undefined4 param_1)

{
  char cVar1;
  ushort uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar2 = (ushort)param_1;
  if ((((((((uVar2 != 0x15) && (uVar2 != 0x18)) && (uVar2 != 0x19)) &&
         ((uVar2 != 0x1a && (uVar2 != 0x1b)))) && (uVar2 != 0x1c)) &&
       (((uVar2 != 0x1d && (uVar2 != 0x1e)) &&
        ((uVar2 != 0x1f && (((uVar2 != 0x69 && (uVar2 != 0x70)) && (uVar2 != 0xce)))))))) &&
      (((uVar2 != 0x44 && (uVar2 != 0x71)) &&
       ((uVar2 != 0x72 &&
        ((((uVar2 != 0x73 && (uVar2 != 0x74)) &&
          ((uVar2 != 0x75 && (((uVar2 != 0xbe && (uVar2 != 0xbf)) && (uVar2 != 0xc0)))))) &&
         ((uVar2 != 0xc1 && (uVar2 != 0x76)))))))))) &&
     ((uVar2 != 0x67 && ((uVar2 < 500 || (0x260 < uVar2)))))) {
    cVar1 = FUN_01d3d620(param_1);
    if ((cVar1 == '\0') && ((uVar2 < 40000 || (0x9c48 < uVar2)))) goto LAB_0172e192;
  }
  uVar3 = 0;
LAB_0172e192:
  return uVar3 & 0xffffffff;
}


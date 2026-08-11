/* Ghidra address: 00dd2ca0 */
/* Ghidra symbol: FUN_00dd2ca0 */


char * FUN_00dd2ca0(char *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                   char *param_5,char *param_6)

{
  char cVar1;
  char *pcVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  pcVar2 = (char *)FUN_00410920(param_1,local_res10);
  if (pcVar2 != (char *)0xffffffffffffffff) {
    pcVar2[0x10] = '\0';
    pcVar2[0x11] = '\0';
    pcVar2[0x12] = '\0';
    pcVar2[0x13] = '\0';
    pcVar2[0x14] = '\0';
    pcVar2[0x15] = '\0';
    pcVar2[0x16] = '\0';
    pcVar2[0x17] = '\0';
    pcVar2[0x18] = '\0';
    pcVar2[0x19] = '\0';
    pcVar2[0x1a] = '\0';
    pcVar2[0x1b] = '\0';
    pcVar2[0x1c] = '\0';
    pcVar2[0x1d] = '\0';
    pcVar2[0x1e] = '\0';
    pcVar2[0x1f] = '\0';
    pcVar2[0x20] = '\0';
    pcVar2[0x21] = '\0';
    pcVar2[0x22] = '\0';
    pcVar2[0x24] = '\0';
    pcVar2[0x25] = '\0';
    pcVar2[0x26] = '\0';
    pcVar2[0x27] = '\0';
    pcVar2[0x28] = '\0';
    pcVar2[0x29] = '\0';
    pcVar2[0x2a] = '\0';
    pcVar2[0x2b] = '\0';
    pcVar2[0x2c] = '\0';
    pcVar2[0x2d] = '\0';
    pcVar2[0x2e] = '\0';
    pcVar2[0x2f] = '\0';
    pcVar2[0x30] = '\0';
    pcVar2[0x31] = '\0';
    pcVar2[0x32] = -0x40;
    pcVar2[0x33] = -1;
    pcVar2[0x34] = -1;
    pcVar2[0x35] = -1;
    pcVar2[0x36] = -0x21;
    pcVar2[0x37] = 'A';
    pcVar2[0x38] = '\0';
    pcVar2[0x39] = '\0';
    pcVar2[0x3a] = '\0';
    pcVar2[0x3b] = '\0';
    pcVar2[0x3c] = '\0';
    pcVar2[0x3d] = '\0';
    pcVar2[0x3e] = '\0';
    pcVar2[0x3f] = '\0';
    *pcVar2 = *param_5;
    *param_5 = *param_5 + '\x02';
    cVar1 = *param_6;
    pcVar2[5] = cVar1;
    *param_6 = *param_6 + '\x01';
    FUN_00dd2ba0(pcVar2,0,cVar1,param_3,param_4);
    param_1 = pcVar2;
  }
  return param_1;
}


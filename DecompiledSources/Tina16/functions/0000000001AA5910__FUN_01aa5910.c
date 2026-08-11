/* Ghidra address: 01aa5910 */
/* Ghidra symbol: FUN_01aa5910 */


bool FUN_01aa5910(char *param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  char *pcVar3;
  char cVar4;
  char cVar5;
  undefined8 local_100 [2];
  char local_f0 [100];
  char local_8c [108];
  
  local_100[0] = 0;
  if (param_1[0x5a9] == 0) {
    cVar5 = param_1[0x5a8];
  }
  else {
    cVar5 = param_1[(ulonglong)(byte)param_1[0x5a9] * 0x18 + 0x5a0];
  }
  cVar4 = *param_1;
  bVar2 = 1;
  if (cVar4 != '\0') {
    pcVar3 = local_f0;
    do {
      *pcVar3 = param_1[(ulonglong)bVar2 + 0x587];
      bVar2 = bVar2 + 1;
      pcVar3 = pcVar3 + 1;
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
  }
  cVar4 = local_f0[0];
  if (param_1[0x563] != '\0') {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] != '\0') {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_8c,2);
    cVar4 = local_8c[0];
  }
  if ((param_1[0x569] != local_f0[1]) && (param_1[0x568] != local_f0[0])) {
    FUN_004401f0(local_100,0x4f7);
    FUN_00414ad0(DAT_02110a68,local_100[0]);
    FUN_01aa37d0(1,&DAT_02110a68);
  }
  bVar1 = false;
  if ((local_f0[3] == '\0') && (param_1[0x56b] == '\x01')) {
    cVar4 = '\0';
    bVar1 = true;
  }
  if ((local_f0[2] == '\0') && (param_1[0x56a] == '\x01')) {
    cVar4 = '\x01';
    bVar1 = true;
  }
  if ((local_f0[1] == '\x01') && (cVar5 != local_f0[0])) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_01aa3a80(param_1 + 0x5a8,param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),cVar4);
  }
  cVar5 = *param_1;
  bVar2 = 1;
  if (cVar5 != '\0') {
    pcVar3 = local_f0;
    do {
      param_1[(ulonglong)bVar2 + 0x567] = *pcVar3;
      bVar2 = bVar2 + 1;
      pcVar3 = pcVar3 + 1;
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
  }
  FUN_00414480(local_100);
  return bVar1;
}


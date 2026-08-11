/* Ghidra address: 01aa56a0 */
/* Ghidra symbol: FUN_01aa56a0 */


undefined1 FUN_01aa56a0(char *param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 local_109;
  undefined8 local_100 [2];
  char local_f0 [100];
  char local_8c [108];
  
  local_100[0] = 0;
  if (param_1[0x5a9] == 0) {
    cVar4 = param_1[0x5a8];
  }
  else {
    cVar4 = param_1[(ulonglong)(byte)param_1[0x5a9] * 0x18 + 0x5a0];
  }
  cVar3 = *param_1;
  bVar1 = 1;
  if (cVar3 != '\0') {
    pcVar2 = local_f0;
    do {
      *pcVar2 = param_1[(ulonglong)bVar1 + 0x587];
      bVar1 = bVar1 + 1;
      pcVar2 = pcVar2 + 1;
      cVar3 = cVar3 + -1;
    } while (cVar3 != '\0');
  }
  cVar3 = local_f0[0];
  if (param_1[0x563] != '\0') {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_f0,1);
  }
  if (param_1[0x564] != '\0') {
    FUN_01aa1210(*(undefined8 *)(param_1 + 0x550),local_8c,2);
    cVar3 = local_8c[0];
  }
  if ((param_1[0x569] != local_f0[1]) && (param_1[0x568] != local_f0[0])) {
    FUN_004401f0(local_100,0x4f7);
    FUN_00414ad0(DAT_02110a68,local_100[0]);
    FUN_01aa37d0(1,&DAT_02110a68);
  }
  if ((local_f0[1] == '\x01') && (cVar4 != local_f0[0])) {
    FUN_01aa3a80(param_1 + 0x5a8,param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),cVar3);
    local_109 = 1;
  }
  else {
    local_109 = 0;
  }
  param_1[0x568] = local_f0[0];
  param_1[0x569] = local_f0[1];
  FUN_00414480(local_100);
  return local_109;
}


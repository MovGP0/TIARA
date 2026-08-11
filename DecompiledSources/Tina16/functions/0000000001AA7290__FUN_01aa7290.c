/* Ghidra address: 01aa7290 */
/* Ghidra symbol: FUN_01aa7290 */


undefined1 FUN_01aa7290(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 local_49;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  if (param_1[0x5a9] == 0) {
    bVar2 = param_1[0x5a8];
  }
  else {
    bVar2 = param_1[(ulonglong)(byte)param_1[0x5a9] * 0x18 + 0x5a0];
  }
  uVar4 = (ulonglong)bVar2;
  if (((param_1[0x56c] != param_1[0x58c]) &&
      ((((param_1[0x568] != param_1[0x588] || (param_1[0x569] != param_1[0x589])) ||
        (param_1[0x56a] != param_1[0x58a])) || (param_1[0x56b] != param_1[0x58b])))) ||
     ((param_1[0x56a] != param_1[0x58a] && (param_1[0x56b] != param_1[0x58b])))) {
    FUN_004401f0(local_30,0x4fc);
    FUN_004401f0(&local_38,0x4f9);
    FUN_00416ba0(DAT_02110a68,local_30[0],local_38);
    FUN_01aa37d0(1,&DAT_02110a68);
  }
  if ((param_1[0x588] == '\x01') && (param_1[0x589] == '\x01')) {
    FUN_004401f0(&local_40,0x4fd);
    FUN_00414ad0(DAT_02110a68,local_40);
    FUN_01aa37d0(1,&DAT_02110a68);
  }
  if (((((((param_1[0x20] == '\x01') && (param_1[0x56c] == '\0')) && (param_1[0x58c] == '\x01')) ||
        (((param_1[0x20] == '\x02' && (param_1[0x56c] == '\x01')) && (param_1[0x58c] == '\0')))) &&
       (((bVar2 == 0 && (param_1[0x588] == '\x01')) || ((bVar2 == 1 && (param_1[0x589] == '\x01'))))
       )) || ((((param_1[0x20] == '\x03' && (param_1[0x56c] == '\x01')) && (param_1[0x58c] == '\0'))
              && (((bVar2 == 0 && (**(char **)(param_1 + 0x41e8) == '\x01')) ||
                  ((bVar2 == 1 && (*(char *)(*(longlong *)(param_1 + 0x41e8) + 1) == '\x01'))))))))
     || ((((param_1[0x56a] == '\x01' && (param_1[0x58a] == '\0')) && (bVar2 == 1)) ||
         (((param_1[0x56b] == '\x01' && (param_1[0x58b] == '\0')) && (bVar2 == 0)))))) {
    FUN_01aa3a80(param_1 + 0x5a8,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + uVar4 * 0x20 +
                  (ulonglong)(byte)(&DAT_01fce3e8)[uVar4] * 8),(&DAT_01fce3e8)[uVar4]);
    FUN_01aa3a80(param_1 + 0xd30,param_2,
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 8) + (ulonglong)(byte)(&DAT_01fce3e8)[uVar4] * 0x20 +
                  uVar4 * 8),bVar2);
    local_49 = 1;
  }
  else {
    if (((param_1[0x20] == '\x03') && (param_1[0x56c] == '\0')) && (param_1[0x58c] == '\x01')) {
      pcVar1 = *(char **)(param_1 + 0x41e8);
      *pcVar1 = param_1[0x568];
      pcVar1[1] = param_1[0x569];
    }
    local_49 = 0;
  }
  bVar2 = 1;
  for (cVar3 = *param_1; cVar3 != '\0'; cVar3 = cVar3 + -1) {
    param_1[(ulonglong)bVar2 + 0x567] = param_1[(ulonglong)bVar2 + 0x587];
    bVar2 = bVar2 + 1;
  }
  FUN_00414560(&local_40,3);
  return local_49;
}


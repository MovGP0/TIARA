/* Ghidra address: 0060e390 */
/* Ghidra symbol: FUN_0060e390 */


void FUN_0060e390(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = thunk_FUN_041c9697(param_2,param_1 + 0x6c);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(undefined8 *)(param_1 + 0x6c) = *param_2;
    *(undefined8 *)(param_1 + 0x74) = param_2[1];
    cVar1 = thunk_FUN_041c9697(param_2,PTR_DAT_02001eb0);
    if (cVar1 == '\0') {
      cVar1 = thunk_FUN_041c9697(param_2,PTR_DAT_020019f8);
      if (cVar1 == '\0') {
        cVar1 = thunk_FUN_041c9697(param_2,PTR_DAT_02003dc8);
        if (cVar1 == '\0') {
          cVar1 = thunk_FUN_041c9697(param_2,PTR_DAT_02004ee0);
          if (cVar1 == '\0') {
            cVar1 = thunk_FUN_041c9697(param_2,PTR_DAT_02004228);
            if (cVar1 == '\0') {
              cVar1 = thunk_FUN_041c9697(param_2,PTR_DAT_02005018);
              if (cVar1 == '\0') {
                *(undefined1 *)(param_1 + 0x68) = 6;
              }
              else {
                *(undefined1 *)(param_1 + 0x68) = 5;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x68) = 3;
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x68) = 4;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x68) = 2;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x68) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x68) = 0;
    }
  }
  return;
}


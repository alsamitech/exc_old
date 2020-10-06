# exC - Extended C libraries

**These libraries bring extra functionality to the already useful C standard libraries.**
This is free to use for everyone.

the **standard** version of this libarary already contains `stdio.h` and `stdlib.h`, so no need to include it again.

other notes about the standard version of the library:
to include the entire library, include `exc.h`. That will include all files in the standard version of the libarary.

This Library contains **All Acsess Variables (AAVs)**
All acseess variabes are where some of the results are stored if they cannot be returned for some reason or another. Here is an example:
```
exampleAdd("10, 20")
int ExampleResult = ExampleAAV
```

This project is liscensed under the EXPAT (MIT) Liscnese

**DISCLAIMER:**
**THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.**
